/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *root_mode_text;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *_frame_serial_ui;
    QVBoxLayout *frame_serial_cfg;
    QVBoxLayout *verticalLayout;
    QFormLayout *serial_config;
    QLabel *com_label;
    QComboBox *com_list;
    QLabel *com_num_label;
    QLabel *com_info_label;
    QLabel *baudrate_label;
    QComboBox *baudrate_list;
    QLabel *datalength_label;
    QComboBox *datalength_list;
    QLabel *party_label;
    QComboBox *parity_list;
    QLabel *stop_bit_label;
    QComboBox *stopbit_list;
    QPushButton *com_bnt;
    QLabel *com_status_light;
    QFormLayout *timer_event;
    QPushButton *timer_bnt;
    QLineEdit *timer_frequency_input;
    QVBoxLayout *verticalLayout_4;
    QPushButton *compile_bnt;
    QLabel *compile_time;
    QLabel *root_mode;
    QLineEdit *passwd;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *read_rotate_speed_btn;
    QLineEdit *set_zero_input;
    QPushButton *read_angle_btn;
    QLineEdit *set_id_input;
    QLabel *read_angle_label;
    QPushButton *reset_position_btn;
    QLabel *read_id_label;
    QLabel *read_flag_label;
    QLineEdit *set_angle_input;
    QLabel *read_rotate_speed_label;
    QPushButton *reset_btn;
    QLabel *read_zero_label;
    QLabel *read_error_label;
    QPushButton *set_rotate_speed_btn;
    QPushButton *read_error_btn;
    QPushButton *read_flag_btn;
    QPushButton *set_id_btn;
    QPushButton *read_zero_poes_btn;
    QPushButton *set_angle_btn;
    QLineEdit *set_error_input;
    QPushButton *set_error_btn;
    QPushButton *set_zero_btn;
    QPushButton *read_id_btn;
    QPushButton *read_encoder_bnt;
    QLabel *read_encoder_label;
    QLineEdit *set_rotate_speed_input;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(797, 592);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        root_mode_text = new QTextEdit(centralwidget);
        root_mode_text->setObjectName(QString::fromUtf8("root_mode_text"));
        root_mode_text->setGeometry(QRect(220, 320, 561, 221));
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 202, 531));
        _frame_serial_ui = new QVBoxLayout(verticalLayoutWidget_3);
        _frame_serial_ui->setObjectName(QString::fromUtf8("_frame_serial_ui"));
        _frame_serial_ui->setContentsMargins(0, 0, 0, 0);
        frame_serial_cfg = new QVBoxLayout();
        frame_serial_cfg->setObjectName(QString::fromUtf8("frame_serial_cfg"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        serial_config = new QFormLayout();
        serial_config->setObjectName(QString::fromUtf8("serial_config"));
        com_label = new QLabel(verticalLayoutWidget_3);
        com_label->setObjectName(QString::fromUtf8("com_label"));
        QFont font;
        font.setPointSize(11);
        com_label->setFont(font);

        serial_config->setWidget(0, QFormLayout::LabelRole, com_label);

        com_list = new QComboBox(verticalLayoutWidget_3);
        com_list->setObjectName(QString::fromUtf8("com_list"));

        serial_config->setWidget(0, QFormLayout::FieldRole, com_list);

        com_num_label = new QLabel(verticalLayoutWidget_3);
        com_num_label->setObjectName(QString::fromUtf8("com_num_label"));

        serial_config->setWidget(1, QFormLayout::LabelRole, com_num_label);

        com_info_label = new QLabel(verticalLayoutWidget_3);
        com_info_label->setObjectName(QString::fromUtf8("com_info_label"));

        serial_config->setWidget(1, QFormLayout::FieldRole, com_info_label);

        baudrate_label = new QLabel(verticalLayoutWidget_3);
        baudrate_label->setObjectName(QString::fromUtf8("baudrate_label"));
        baudrate_label->setFont(font);

        serial_config->setWidget(2, QFormLayout::LabelRole, baudrate_label);

        baudrate_list = new QComboBox(verticalLayoutWidget_3);
        baudrate_list->setObjectName(QString::fromUtf8("baudrate_list"));

        serial_config->setWidget(2, QFormLayout::FieldRole, baudrate_list);

        datalength_label = new QLabel(verticalLayoutWidget_3);
        datalength_label->setObjectName(QString::fromUtf8("datalength_label"));
        datalength_label->setFont(font);

        serial_config->setWidget(3, QFormLayout::LabelRole, datalength_label);

        datalength_list = new QComboBox(verticalLayoutWidget_3);
        datalength_list->setObjectName(QString::fromUtf8("datalength_list"));

        serial_config->setWidget(3, QFormLayout::FieldRole, datalength_list);

        party_label = new QLabel(verticalLayoutWidget_3);
        party_label->setObjectName(QString::fromUtf8("party_label"));
        party_label->setFont(font);

        serial_config->setWidget(4, QFormLayout::LabelRole, party_label);

        parity_list = new QComboBox(verticalLayoutWidget_3);
        parity_list->setObjectName(QString::fromUtf8("parity_list"));

        serial_config->setWidget(4, QFormLayout::FieldRole, parity_list);

        stop_bit_label = new QLabel(verticalLayoutWidget_3);
        stop_bit_label->setObjectName(QString::fromUtf8("stop_bit_label"));
        stop_bit_label->setFont(font);

        serial_config->setWidget(5, QFormLayout::LabelRole, stop_bit_label);

        stopbit_list = new QComboBox(verticalLayoutWidget_3);
        stopbit_list->setObjectName(QString::fromUtf8("stopbit_list"));

        serial_config->setWidget(5, QFormLayout::FieldRole, stopbit_list);


        verticalLayout->addLayout(serial_config);

        com_bnt = new QPushButton(verticalLayoutWidget_3);
        com_bnt->setObjectName(QString::fromUtf8("com_bnt"));

        verticalLayout->addWidget(com_bnt);

        com_status_light = new QLabel(verticalLayoutWidget_3);
        com_status_light->setObjectName(QString::fromUtf8("com_status_light"));

        verticalLayout->addWidget(com_status_light);

        timer_event = new QFormLayout();
        timer_event->setObjectName(QString::fromUtf8("timer_event"));
        timer_bnt = new QPushButton(verticalLayoutWidget_3);
        timer_bnt->setObjectName(QString::fromUtf8("timer_bnt"));

        timer_event->setWidget(0, QFormLayout::LabelRole, timer_bnt);

        timer_frequency_input = new QLineEdit(verticalLayoutWidget_3);
        timer_frequency_input->setObjectName(QString::fromUtf8("timer_frequency_input"));

        timer_event->setWidget(0, QFormLayout::FieldRole, timer_frequency_input);


        verticalLayout->addLayout(timer_event);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        compile_bnt = new QPushButton(verticalLayoutWidget_3);
        compile_bnt->setObjectName(QString::fromUtf8("compile_bnt"));

        verticalLayout_4->addWidget(compile_bnt);

        compile_time = new QLabel(verticalLayoutWidget_3);
        compile_time->setObjectName(QString::fromUtf8("compile_time"));

        verticalLayout_4->addWidget(compile_time);


        verticalLayout->addLayout(verticalLayout_4);


        frame_serial_cfg->addLayout(verticalLayout);

        root_mode = new QLabel(verticalLayoutWidget_3);
        root_mode->setObjectName(QString::fromUtf8("root_mode"));
        root_mode->setFont(font);
        root_mode->setAlignment(Qt::AlignCenter);

        frame_serial_cfg->addWidget(root_mode);

        passwd = new QLineEdit(verticalLayoutWidget_3);
        passwd->setObjectName(QString::fromUtf8("passwd"));

        frame_serial_cfg->addWidget(passwd);


        _frame_serial_ui->addLayout(frame_serial_cfg);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(220, 10, 561, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        read_rotate_speed_btn = new QPushButton(gridLayoutWidget);
        read_rotate_speed_btn->setObjectName(QString::fromUtf8("read_rotate_speed_btn"));

        gridLayout->addWidget(read_rotate_speed_btn, 6, 2, 1, 1);

        set_zero_input = new QLineEdit(gridLayoutWidget);
        set_zero_input->setObjectName(QString::fromUtf8("set_zero_input"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(set_zero_input->sizePolicy().hasHeightForWidth());
        set_zero_input->setSizePolicy(sizePolicy);

        gridLayout->addWidget(set_zero_input, 5, 1, 1, 1);

        read_angle_btn = new QPushButton(gridLayoutWidget);
        read_angle_btn->setObjectName(QString::fromUtf8("read_angle_btn"));

        gridLayout->addWidget(read_angle_btn, 2, 2, 1, 1);

        set_id_input = new QLineEdit(gridLayoutWidget);
        set_id_input->setObjectName(QString::fromUtf8("set_id_input"));
        sizePolicy.setHeightForWidth(set_id_input->sizePolicy().hasHeightForWidth());
        set_id_input->setSizePolicy(sizePolicy);
        set_id_input->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(set_id_input, 1, 1, 1, 1);

        read_angle_label = new QLabel(gridLayoutWidget);
        read_angle_label->setObjectName(QString::fromUtf8("read_angle_label"));

        gridLayout->addWidget(read_angle_label, 2, 4, 1, 1);

        reset_position_btn = new QPushButton(gridLayoutWidget);
        reset_position_btn->setObjectName(QString::fromUtf8("reset_position_btn"));

        gridLayout->addWidget(reset_position_btn, 9, 0, 1, 1);

        read_id_label = new QLabel(gridLayoutWidget);
        read_id_label->setObjectName(QString::fromUtf8("read_id_label"));

        gridLayout->addWidget(read_id_label, 1, 4, 1, 1);

        read_flag_label = new QLabel(gridLayoutWidget);
        read_flag_label->setObjectName(QString::fromUtf8("read_flag_label"));

        gridLayout->addWidget(read_flag_label, 8, 1, 1, 1);

        set_angle_input = new QLineEdit(gridLayoutWidget);
        set_angle_input->setObjectName(QString::fromUtf8("set_angle_input"));
        sizePolicy.setHeightForWidth(set_angle_input->sizePolicy().hasHeightForWidth());
        set_angle_input->setSizePolicy(sizePolicy);

        gridLayout->addWidget(set_angle_input, 2, 1, 1, 1);

        read_rotate_speed_label = new QLabel(gridLayoutWidget);
        read_rotate_speed_label->setObjectName(QString::fromUtf8("read_rotate_speed_label"));

        gridLayout->addWidget(read_rotate_speed_label, 6, 4, 1, 1);

        reset_btn = new QPushButton(gridLayoutWidget);
        reset_btn->setObjectName(QString::fromUtf8("reset_btn"));

        gridLayout->addWidget(reset_btn, 9, 2, 1, 1);

        read_zero_label = new QLabel(gridLayoutWidget);
        read_zero_label->setObjectName(QString::fromUtf8("read_zero_label"));

        gridLayout->addWidget(read_zero_label, 5, 4, 1, 1);

        read_error_label = new QLabel(gridLayoutWidget);
        read_error_label->setObjectName(QString::fromUtf8("read_error_label"));

        gridLayout->addWidget(read_error_label, 4, 4, 1, 1);

        set_rotate_speed_btn = new QPushButton(gridLayoutWidget);
        set_rotate_speed_btn->setObjectName(QString::fromUtf8("set_rotate_speed_btn"));

        gridLayout->addWidget(set_rotate_speed_btn, 6, 0, 1, 1);

        read_error_btn = new QPushButton(gridLayoutWidget);
        read_error_btn->setObjectName(QString::fromUtf8("read_error_btn"));

        gridLayout->addWidget(read_error_btn, 4, 2, 1, 1);

        read_flag_btn = new QPushButton(gridLayoutWidget);
        read_flag_btn->setObjectName(QString::fromUtf8("read_flag_btn"));

        gridLayout->addWidget(read_flag_btn, 8, 0, 1, 1);

        set_id_btn = new QPushButton(gridLayoutWidget);
        set_id_btn->setObjectName(QString::fromUtf8("set_id_btn"));

        gridLayout->addWidget(set_id_btn, 1, 0, 1, 1);

        read_zero_poes_btn = new QPushButton(gridLayoutWidget);
        read_zero_poes_btn->setObjectName(QString::fromUtf8("read_zero_poes_btn"));

        gridLayout->addWidget(read_zero_poes_btn, 5, 2, 1, 1);

        set_angle_btn = new QPushButton(gridLayoutWidget);
        set_angle_btn->setObjectName(QString::fromUtf8("set_angle_btn"));

        gridLayout->addWidget(set_angle_btn, 2, 0, 1, 1);

        set_error_input = new QLineEdit(gridLayoutWidget);
        set_error_input->setObjectName(QString::fromUtf8("set_error_input"));
        sizePolicy.setHeightForWidth(set_error_input->sizePolicy().hasHeightForWidth());
        set_error_input->setSizePolicy(sizePolicy);

        gridLayout->addWidget(set_error_input, 4, 1, 1, 1);

        set_error_btn = new QPushButton(gridLayoutWidget);
        set_error_btn->setObjectName(QString::fromUtf8("set_error_btn"));

        gridLayout->addWidget(set_error_btn, 4, 0, 1, 1);

        set_zero_btn = new QPushButton(gridLayoutWidget);
        set_zero_btn->setObjectName(QString::fromUtf8("set_zero_btn"));

        gridLayout->addWidget(set_zero_btn, 5, 0, 1, 1);

        read_id_btn = new QPushButton(gridLayoutWidget);
        read_id_btn->setObjectName(QString::fromUtf8("read_id_btn"));

        gridLayout->addWidget(read_id_btn, 1, 2, 1, 1);

        read_encoder_bnt = new QPushButton(gridLayoutWidget);
        read_encoder_bnt->setObjectName(QString::fromUtf8("read_encoder_bnt"));

        gridLayout->addWidget(read_encoder_bnt, 8, 2, 1, 1);

        read_encoder_label = new QLabel(gridLayoutWidget);
        read_encoder_label->setObjectName(QString::fromUtf8("read_encoder_label"));

        gridLayout->addWidget(read_encoder_label, 8, 4, 1, 1);

        set_rotate_speed_input = new QLineEdit(gridLayoutWidget);
        set_rotate_speed_input->setObjectName(QString::fromUtf8("set_rotate_speed_input"));
        sizePolicy.setHeightForWidth(set_rotate_speed_input->sizePolicy().hasHeightForWidth());
        set_rotate_speed_input->setSizePolicy(sizePolicy);

        gridLayout->addWidget(set_rotate_speed_input, 6, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 797, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        com_label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", nullptr));
        com_num_label->setText(QCoreApplication::translate("MainWindow", "COM", nullptr));
        com_info_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        baudrate_label->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        datalength_label->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        party_label->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        stop_bit_label->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        com_bnt->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        com_status_light->setText(QCoreApplication::translate("MainWindow", "Status_led", nullptr));
        timer_bnt->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266", nullptr));
        compile_bnt->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\257\221\346\227\266\351\227\264", nullptr));
        compile_time->setText(QCoreApplication::translate("MainWindow", "led", nullptr));
        root_mode->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\217\221\350\200\205\346\250\241\345\274\217", nullptr));
        read_rotate_speed_btn->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\350\275\254\351\200\237", nullptr));
        read_angle_btn->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\350\247\222\345\272\246", nullptr));
        read_angle_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        reset_position_btn->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\345\233\236\351\233\266", nullptr));
        read_id_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        read_flag_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        read_rotate_speed_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        reset_btn->setText(QCoreApplication::translate("MainWindow", "\345\207\272\345\216\202\345\214\226\350\256\276\347\275\256", nullptr));
        read_zero_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        read_error_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        set_rotate_speed_btn->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\275\254\351\200\237", nullptr));
        read_error_btn->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\350\257\257\345\267\256", nullptr));
        read_flag_btn->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\346\240\207\345\277\227\344\275\215", nullptr));
        set_id_btn->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256ID", nullptr));
        read_zero_poes_btn->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\351\233\266\344\275\215", nullptr));
        set_angle_btn->setText(QCoreApplication::translate("MainWindow", "\350\275\254\345\212\250\350\247\222\345\272\246", nullptr));
        set_error_btn->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\257\257\345\267\256", nullptr));
        set_zero_btn->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\351\233\266\344\275\215", nullptr));
        read_id_btn->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226ID", nullptr));
        read_encoder_bnt->setText(QCoreApplication::translate("MainWindow", "\344\274\240\346\204\237\345\231\250\350\247\222\345\272\246", nullptr));
        read_encoder_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
