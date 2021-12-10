/********************************************************************************
** Form generated from reading UI file 'informacion_base_de_datos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMACION_BASE_DE_DATOS_H
#define UI_INFORMACION_BASE_DE_DATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Informacion_base_de_datos
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Recuperar_medida;
    QLabel *label_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLineEdit *TempMin;
    QLineEdit *TempProm;
    QLabel *label_8;
    QLineEdit *TempMax;
    QLabel *label_9;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_17;
    QLabel *label_19;
    QLineEdit *DireccionVProm;
    QLineEdit *DireccionVMax;
    QLabel *label_18;
    QLineEdit *DireccionVMin;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_5;
    QLabel *label_20;
    QLineEdit *VelocidadVMin;
    QLineEdit *VelocidadVProm;
    QLabel *label_21;
    QLineEdit *VelocidadVMax;
    QLabel *label_22;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLineEdit *HumedadMin;
    QLineEdit *HumedadProm;
    QLabel *label_12;
    QLineEdit *HumedadMax;
    QLabel *label_13;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QLineEdit *PrecipitacionMin;
    QLineEdit *PrecipitacionProm;
    QLabel *label_15;
    QLineEdit *PrecipitacionMax;
    QLabel *label_16;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_23;
    QLineEdit *IntensidadLMin;
    QLineEdit *IntensidadLProm;
    QLabel *label_24;
    QLineEdit *IntensidadLMax;
    QLabel *label_25;
    QFrame *alerta;
    QLabel *label_26;
    QMenuBar *menubar;
    QMenu *menuDatos_Sensores;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Informacion_base_de_datos)
    {
        if (Informacion_base_de_datos->objectName().isEmpty())
            Informacion_base_de_datos->setObjectName(QString::fromUtf8("Informacion_base_de_datos"));
        Informacion_base_de_datos->resize(746, 564);
        Informacion_base_de_datos->setAutoFillBackground(true);
        centralwidget = new QWidget(Informacion_base_de_datos);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 171, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 150, 101, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 121, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 260, 131, 17));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 260, 131, 17));
        Recuperar_medida = new QPushButton(centralwidget);
        Recuperar_medida->setObjectName(QString::fromUtf8("Recuperar_medida"));
        Recuperar_medida->setGeometry(QRect(30, 430, 141, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 40, 171, 17));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 60, 331, 73));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        TempMin = new QLineEdit(gridLayoutWidget);
        TempMin->setObjectName(QString::fromUtf8("TempMin"));

        gridLayout->addWidget(TempMin, 1, 1, 1, 1);

        TempProm = new QLineEdit(gridLayoutWidget);
        TempProm->setObjectName(QString::fromUtf8("TempProm"));

        gridLayout->addWidget(TempProm, 1, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        TempMax = new QLineEdit(gridLayoutWidget);
        TempMax->setObjectName(QString::fromUtf8("TempMax"));

        gridLayout->addWidget(TempMax, 1, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 170, 331, 71));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(gridLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 0, 2, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 0, 1, 1, 1);

        DireccionVProm = new QLineEdit(gridLayoutWidget_2);
        DireccionVProm->setObjectName(QString::fromUtf8("DireccionVProm"));

        gridLayout_4->addWidget(DireccionVProm, 1, 2, 1, 1);

        DireccionVMax = new QLineEdit(gridLayoutWidget_2);
        DireccionVMax->setObjectName(QString::fromUtf8("DireccionVMax"));

        gridLayout_4->addWidget(DireccionVMax, 1, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 0, 0, 1, 1);

        DireccionVMin = new QLineEdit(gridLayoutWidget_2);
        DireccionVMin->setObjectName(QString::fromUtf8("DireccionVMin"));

        gridLayout_4->addWidget(DireccionVMin, 1, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 280, 331, 73));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(gridLayoutWidget_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 0, 2, 1, 1);

        VelocidadVMin = new QLineEdit(gridLayoutWidget_3);
        VelocidadVMin->setObjectName(QString::fromUtf8("VelocidadVMin"));

        gridLayout_5->addWidget(VelocidadVMin, 1, 1, 1, 1);

        VelocidadVProm = new QLineEdit(gridLayoutWidget_3);
        VelocidadVProm->setObjectName(QString::fromUtf8("VelocidadVProm"));

        gridLayout_5->addWidget(VelocidadVProm, 1, 2, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 0, 0, 1, 1);

        VelocidadVMax = new QLineEdit(gridLayoutWidget_3);
        VelocidadVMax->setObjectName(QString::fromUtf8("VelocidadVMax"));

        gridLayout_5->addWidget(VelocidadVMax, 1, 0, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_5->addWidget(label_22, 0, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(centralwidget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(400, 60, 331, 73));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 0, 2, 1, 1);

        HumedadMin = new QLineEdit(gridLayoutWidget_4);
        HumedadMin->setObjectName(QString::fromUtf8("HumedadMin"));

        gridLayout_2->addWidget(HumedadMin, 1, 1, 1, 1);

        HumedadProm = new QLineEdit(gridLayoutWidget_4);
        HumedadProm->setObjectName(QString::fromUtf8("HumedadProm"));

        gridLayout_2->addWidget(HumedadProm, 1, 2, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        HumedadMax = new QLineEdit(gridLayoutWidget_4);
        HumedadMax->setObjectName(QString::fromUtf8("HumedadMax"));

        gridLayout_2->addWidget(HumedadMax, 1, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 0, 1, 1, 1);

        gridLayoutWidget_5 = new QWidget(centralwidget);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(400, 170, 331, 73));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(gridLayoutWidget_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 0, 2, 1, 1);

        PrecipitacionMin = new QLineEdit(gridLayoutWidget_5);
        PrecipitacionMin->setObjectName(QString::fromUtf8("PrecipitacionMin"));

        gridLayout_3->addWidget(PrecipitacionMin, 1, 1, 1, 1);

        PrecipitacionProm = new QLineEdit(gridLayoutWidget_5);
        PrecipitacionProm->setObjectName(QString::fromUtf8("PrecipitacionProm"));

        gridLayout_3->addWidget(PrecipitacionProm, 1, 2, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 0, 0, 1, 1);

        PrecipitacionMax = new QLineEdit(gridLayoutWidget_5);
        PrecipitacionMax->setObjectName(QString::fromUtf8("PrecipitacionMax"));

        gridLayout_3->addWidget(PrecipitacionMax, 1, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 0, 1, 1, 1);

        gridLayoutWidget_6 = new QWidget(centralwidget);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(400, 280, 331, 73));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(gridLayoutWidget_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_6->addWidget(label_23, 0, 2, 1, 1);

        IntensidadLMin = new QLineEdit(gridLayoutWidget_6);
        IntensidadLMin->setObjectName(QString::fromUtf8("IntensidadLMin"));

        gridLayout_6->addWidget(IntensidadLMin, 1, 1, 1, 1);

        IntensidadLProm = new QLineEdit(gridLayoutWidget_6);
        IntensidadLProm->setObjectName(QString::fromUtf8("IntensidadLProm"));

        gridLayout_6->addWidget(IntensidadLProm, 1, 2, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_6->addWidget(label_24, 0, 0, 1, 1);

        IntensidadLMax = new QLineEdit(gridLayoutWidget_6);
        IntensidadLMax->setObjectName(QString::fromUtf8("IntensidadLMax"));

        gridLayout_6->addWidget(IntensidadLMax, 1, 0, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_6);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_6->addWidget(label_25, 0, 1, 1, 1);

        alerta = new QFrame(centralwidget);
        alerta->setObjectName(QString::fromUtf8("alerta"));
        alerta->setGeometry(QRect(260, 420, 71, 61));
        alerta->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"background-color:green\n"
"}"));
        alerta->setFrameShape(QFrame::StyledPanel);
        alerta->setFrameShadow(QFrame::Raised);
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(260, 390, 111, 17));
        Informacion_base_de_datos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Informacion_base_de_datos);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 746, 22));
        menuDatos_Sensores = new QMenu(menubar);
        menuDatos_Sensores->setObjectName(QString::fromUtf8("menuDatos_Sensores"));
        Informacion_base_de_datos->setMenuBar(menubar);
        statusbar = new QStatusBar(Informacion_base_de_datos);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Informacion_base_de_datos->setStatusBar(statusbar);

        menubar->addAction(menuDatos_Sensores->menuAction());

        retranslateUi(Informacion_base_de_datos);

        QMetaObject::connectSlotsByName(Informacion_base_de_datos);
    } // setupUi

    void retranslateUi(QMainWindow *Informacion_base_de_datos)
    {
        Informacion_base_de_datos->setWindowTitle(QApplication::translate("Informacion_base_de_datos", "MainWindow", nullptr));
        label->setText(QApplication::translate("Informacion_base_de_datos", "Temperatura:", nullptr));
        label_2->setText(QApplication::translate("Informacion_base_de_datos", "Precipitaci\303\263n:", nullptr));
        label_4->setText(QApplication::translate("Informacion_base_de_datos", "Direcci\303\263n viento:", nullptr));
        label_5->setText(QApplication::translate("Informacion_base_de_datos", "Velocidad viento:", nullptr));
        label_6->setText(QApplication::translate("Informacion_base_de_datos", "Intensidad de Luz:", nullptr));
        Recuperar_medida->setText(QApplication::translate("Informacion_base_de_datos", "Recuperar medida", nullptr));
        label_3->setText(QApplication::translate("Informacion_base_de_datos", "Humedad:", nullptr));
        label_10->setText(QApplication::translate("Informacion_base_de_datos", "Promedio", nullptr));
        label_8->setText(QApplication::translate("Informacion_base_de_datos", "M\303\241ximo", nullptr));
        label_9->setText(QApplication::translate("Informacion_base_de_datos", "Minimo", nullptr));
        label_17->setText(QApplication::translate("Informacion_base_de_datos", "Promedio", nullptr));
        label_19->setText(QApplication::translate("Informacion_base_de_datos", "Minimo", nullptr));
        label_18->setText(QApplication::translate("Informacion_base_de_datos", "M\303\241ximo", nullptr));
        label_20->setText(QApplication::translate("Informacion_base_de_datos", "Promedio", nullptr));
        label_21->setText(QApplication::translate("Informacion_base_de_datos", "M\303\241ximo", nullptr));
        label_22->setText(QApplication::translate("Informacion_base_de_datos", "Minimo", nullptr));
        label_11->setText(QApplication::translate("Informacion_base_de_datos", "Promedio", nullptr));
        label_12->setText(QApplication::translate("Informacion_base_de_datos", "M\303\241ximo", nullptr));
        label_13->setText(QApplication::translate("Informacion_base_de_datos", "Minimo", nullptr));
        label_14->setText(QApplication::translate("Informacion_base_de_datos", "Promedio", nullptr));
        label_15->setText(QApplication::translate("Informacion_base_de_datos", "M\303\241ximo", nullptr));
        label_16->setText(QApplication::translate("Informacion_base_de_datos", "Minimo", nullptr));
        label_23->setText(QApplication::translate("Informacion_base_de_datos", "Promedio", nullptr));
        label_24->setText(QApplication::translate("Informacion_base_de_datos", "M\303\241ximo", nullptr));
        label_25->setText(QApplication::translate("Informacion_base_de_datos", "Minimo", nullptr));
        label_26->setText(QApplication::translate("Informacion_base_de_datos", "Led de alerta ", nullptr));
        menuDatos_Sensores->setTitle(QApplication::translate("Informacion_base_de_datos", "Datos Sensores", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Informacion_base_de_datos: public Ui_Informacion_base_de_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMACION_BASE_DE_DATOS_H
