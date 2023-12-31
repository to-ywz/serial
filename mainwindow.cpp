#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QTimer>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    resize(600, 800);

    setWindowTitle("Serial Port");
    send_byte_cnt = 0;
    revc_byte_cnt = 0;
    work_mode = 0;
    serial = new QSerialPort(this);


    ui->baudrate_list->setCurrentIndex(6);
    ui->datalength_list->setCurrentIndex(3);
    ui->parity_list->setCurrentIndex(3);
    ui->stopbit_list->setCurrentIndex(3);

    ui->timer_frequency_input->setText("1000");
    ui->compile_time->setText("");
    ui->passwd->setText("输入指令");

    ui->com_bnt->setCheckable(Qt::Checked);
    ui->timer_bnt->setCheckable(Qt::Checked);
    ui->compile_bnt->setChecked(Qt::Checked);
    ui->set_id_btn->setChecked(Qt::Checked);
    ui->set_angle_btn->setChecked(Qt::Checked);
    ui->set_error_btn->setChecked(Qt::Checked);
    ui->set_zero_btn->setChecked(Qt::Checked);
    ui->set_rotate_speed_btn->setChecked(Qt::Checked);

    ui->read_id_btn->setChecked(Qt::Checked);
    ui->read_angle_btn->setChecked(Qt::Checked);
    ui->set_error_btn->setChecked(Qt::Checked);
    ui->read_zero_poes_btn->setChecked(Qt::Checked);
    ui->read_rotate_speed_btn->setChecked(Qt::Checked);
    ui->read_encoder_bnt->setChecked(Qt::Checked);
    ui->read_flag_btn->setChecked(Qt::Checked);

    ui->reset_btn->setChecked(Qt::Checked);
    ui->reset_position_btn->setChecked(Qt::Checked);

    connect(serial, SIGNAL(serial_ready()),     // 全局准备完毕准备开始接收
            this, SLOT(serial_revc_ready()));

    timer = new QTimer;
    timer->start(1);
    connect(timer,SIGNAL(timeout()),
            this, SLOT(timer_event())); //  定时任务



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::open_com_clicked()
{
    if (ui->com_bnt->text() != QString("打开串口"))
    {
        // 设置串口名称
        serial->setPortName(ui->com_list->currentText());
        // 设置波特;率
        serial->setBaudRate(ui->baudrate_list->currentText().toInt());

        switch (ui->datalength_list->currentText().toInt())
        {
        case 5:serial->setDataBits(QSerialPort::Data5);break;
        case 6:serial->setDataBits(QSerialPort::Data6);break;
        case 7:serial->setDataBits(QSerialPort::Data7);break;
        case 8:serial->setDataBits(QSerialPort::Data8);break;
        default:serial->setDataBits(QSerialPort::UnknownDataBits);break;

        }

        // 设置奇偶校验
        switch(ui->parity_list->currentIndex())
        {
        case 0:serial->setParity(QSerialPort::EvenParity);break;
        case 1:serial->setParity(QSerialPort::MarkParity);break;
        case 2:serial->setParity(QSerialPort::NoParity);break;
        case 3:serial->setParity(QSerialPort::OddParity);break;
        default:serial->setParity(QSerialPort::UnknownParity);break;
        }

        //设置停止位
        switch (ui->stopbit_list->currentIndex())
        {
        case 0:serial->setStopBits(QSerialPort::OneStop);break;
        case 1:serial->setStopBits(QSerialPort::OneAndHalfStop);break;
        case 2:serial->setStopBits(QSerialPort::TwoStop);break;
        default:serial->setStopBits(QSerialPort::UnknownStopBits);break;
        }

        //设置流控制
        serial->setFlowControl(QSerialPort::NoFlowControl);

        if (!serial->open(QIODevice::ReadWrite))
        {
            QMessageBox::about(NULL,"提示","无法打开串口");
            return;
        }

        //下拉控件失能
        ui->com_list->setEnabled(false);
        ui->baudrate_list->setEnabled(false);
        ui->datalength_list->setEnabled(false);
        ui->parity_list->setEnabled(false);
        ui->stopbit_list->setEnabled(false);

        ui->com_bnt->setText(tr("关闭串口"));

    }
    else
    {
        //关闭串口
        serial->close();
        //下拉按键使能
        //下拉控件失能
        ui->com_list->setEnabled(true);
        ui->baudrate_list->setEnabled(true);
        ui->datalength_list->setEnabled(true);
        ui->parity_list->setEnabled(true);
        ui->stopbit_list->setEnabled(true);

        ui->com_bnt->setText(tr("打开串口"));
    }

}

void MainWindow::comlist_clicked(){

    int i = 0, port_num = 0;

   ui->com_list->clear();
   serialport_list.clear();

   foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
   {
       serialport_list +=info.portName();

   }

   port_num = serialport_list.size();

   for(i = 0; i < port_num; i++)
   {
       serial->setPortName(serialport_list[i]);
       if(!serial->open(QIODevice::ReadWrite))
       {
           serialport_list[i]+="(不可用)";
           QVariant v(0);          //禁用
           ui->com_list->setItemData(1, v, Qt::UserRole - 1);
       }
       else
       {
           QVariant v(1|32);       //可用
           ui->com_list->setItemData(1, v, Qt::UserRole - 1);
       }
       serial->close();
   }
   ui->com_list->addItems(serialport_list);
}

void MainWindow::serial_revc_ready()                             //串口接收
{
    int i,length;
    QByteArray last_text;
    //if(ui->checkBox_3->checkState()!=Qt::Checked)
    {
        last_text=ui->root_mode_text->toPlainText().toUtf8();
        revc_buf = serial->readAll();
        revc_byte_cnt += revc_buf.length();
//        ui->rea->setText(QString::number(ReceByte));

        revc_buf = revc_buf.toHex().toUpper();          //字符串转十六进制

        length = revc_buf.length();
        for (i = 0; i <= length / 2; i++)
        {
            revc_buf.insert((2+3*i),' ');                //插入空格字符串
        }
        last_text = last_text.append(revc_buf);

        // root 模式下显示
        if (work_mode)
            ui->root_mode_text->setText(last_text);
    }
}

