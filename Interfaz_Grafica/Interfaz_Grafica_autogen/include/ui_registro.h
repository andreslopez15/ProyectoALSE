/********************************************************************************
** Form generated from reading UI file 'registro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_H
#define UI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registro
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *RegistrarBtn;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *NombreTxt;
    QLineEdit *ApellidoTxt;
    QLineEdit *DocumentoTxt;
    QDateEdit *FechaEdit;
    QLineEdit *UsuarioTxt;
    QLineEdit *ContraseniaTxt;
    QLineEdit *ConfirmaContraseniaTxt;
    QMenuBar *menubar;
    QMenu *menuRegistro_de_Usuario;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Registro)
    {
        if (Registro->objectName().isEmpty())
            Registro->setObjectName(QString::fromUtf8("Registro"));
        Registro->resize(584, 499);
        centralwidget = new QWidget(Registro);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 30, 81, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 170, 181, 41));
        label_4->setWordWrap(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(130, 300, 91, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 100, 67, 17));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 260, 141, 31));
        label_6->setWordWrap(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 340, 161, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 140, 67, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 220, 151, 31));
        label_5->setWordWrap(false);
        RegistrarBtn = new QPushButton(centralwidget);
        RegistrarBtn->setObjectName(QString::fromUtf8("RegistrarBtn"));
        RegistrarBtn->setGeometry(QRect(230, 390, 89, 25));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(220, 90, 191, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 0, 20, 0);
        NombreTxt = new QLineEdit(verticalLayoutWidget);
        NombreTxt->setObjectName(QString::fromUtf8("NombreTxt"));

        verticalLayout->addWidget(NombreTxt);

        ApellidoTxt = new QLineEdit(verticalLayoutWidget);
        ApellidoTxt->setObjectName(QString::fromUtf8("ApellidoTxt"));

        verticalLayout->addWidget(ApellidoTxt);

        DocumentoTxt = new QLineEdit(verticalLayoutWidget);
        DocumentoTxt->setObjectName(QString::fromUtf8("DocumentoTxt"));

        verticalLayout->addWidget(DocumentoTxt);

        FechaEdit = new QDateEdit(verticalLayoutWidget);
        FechaEdit->setObjectName(QString::fromUtf8("FechaEdit"));

        verticalLayout->addWidget(FechaEdit);

        UsuarioTxt = new QLineEdit(verticalLayoutWidget);
        UsuarioTxt->setObjectName(QString::fromUtf8("UsuarioTxt"));

        verticalLayout->addWidget(UsuarioTxt);

        ContraseniaTxt = new QLineEdit(verticalLayoutWidget);
        ContraseniaTxt->setObjectName(QString::fromUtf8("ContraseniaTxt"));
        ContraseniaTxt->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(ContraseniaTxt);

        ConfirmaContraseniaTxt = new QLineEdit(verticalLayoutWidget);
        ConfirmaContraseniaTxt->setObjectName(QString::fromUtf8("ConfirmaContraseniaTxt"));
        ConfirmaContraseniaTxt->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(ConfirmaContraseniaTxt);

        Registro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Registro);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 584, 22));
        menuRegistro_de_Usuario = new QMenu(menubar);
        menuRegistro_de_Usuario->setObjectName(QString::fromUtf8("menuRegistro_de_Usuario"));
        Registro->setMenuBar(menubar);
        statusbar = new QStatusBar(Registro);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Registro->setStatusBar(statusbar);

        menubar->addAction(menuRegistro_de_Usuario->menuAction());

        retranslateUi(Registro);

        QMetaObject::connectSlotsByName(Registro);
    } // setupUi

    void retranslateUi(QMainWindow *Registro)
    {
        Registro->setWindowTitle(QApplication::translate("Registro", "MainWindow", nullptr));
        label->setText(QApplication::translate("Registro", "Registro", nullptr));
        label_4->setText(QApplication::translate("Registro", "Documento de identidad:", nullptr));
        label_7->setText(QApplication::translate("Registro", "Contrase\303\261a:", nullptr));
        label_2->setText(QApplication::translate("Registro", "Nombre:", nullptr));
        label_6->setText(QApplication::translate("Registro", "Nombre de Usuario:", nullptr));
        label_8->setText(QApplication::translate("Registro", "Confirmar contrase\303\261a:", nullptr));
        label_3->setText(QApplication::translate("Registro", "Apellido:", nullptr));
        label_5->setText(QApplication::translate("Registro", "Fecha de Nacimiento:", nullptr));
        RegistrarBtn->setText(QApplication::translate("Registro", "Registrar", nullptr));
        DocumentoTxt->setText(QString());
        menuRegistro_de_Usuario->setTitle(QApplication::translate("Registro", "Registro de Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registro: public Ui_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
