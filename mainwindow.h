#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int tick_Times;

private:
    Ui::MainWindow *ui;

    QSerialPort *serial;    // COM口
    QTimer *timer;          // 定时器

    QByteArray send_buf;    // 发送数组
    QByteArray revc_buf;    // 接收数组

    long long send_byte_cnt;// 发送字节数
    long long revc_byte_cnt;// 接收字节数

    QStringList serialport_stringlist; // 端口链表

private slots:

    void serial_revc_ready();       // 串口接收
    void timer_event();             // 定时事件

    void comlist_clicked();         // 串口列表点击
    void open_com_clicked();        // 打开串口
    void compiler_time_clicked();   // 编译时间
    void timer_clicked();
    void set_id_clicked();
    void set_angle_clicked();
    void set_error_clicked();
    void set_zero_clicked();
    void set_rpm_clicked();         // 设置 转速

    void read_id_clicked();
    void read_angle_clicked();
    void read_flag_clicked();
    void read_error_clicked();
    void read_zero_clicked();
    void read_rpm_clicked();       // 读取转速

    void timer_frequency_input();   // 获取定时时间
    void factory_reset_clicked();   // 出厂化设置
    void turn_to_zero();            // 快速回0

};
#endif // MAINWINDOW_H
