/********************************************************************************
** Form generated from reading UI file 'interfaz.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZ_H
#define UI_INTERFAZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interfaz
{
public:
    QWidget *centralwidget;
    QPushButton *IngresarBtn;
    QPushButton *RegistrarBtn;
    QLineEdit *UsuarioTxt;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *ContraseniaTxt;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuLogin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Interfaz)
    {
        if (Interfaz->objectName().isEmpty())
            Interfaz->setObjectName(QString::fromUtf8("Interfaz"));
        Interfaz->resize(476, 411);
        centralwidget = new QWidget(Interfaz);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        IngresarBtn = new QPushButton(centralwidget);
        IngresarBtn->setObjectName(QString::fromUtf8("IngresarBtn"));
        IngresarBtn->setGeometry(QRect(250, 260, 89, 25));
        RegistrarBtn = new QPushButton(centralwidget);
        RegistrarBtn->setObjectName(QString::fromUtf8("RegistrarBtn"));
        RegistrarBtn->setGeometry(QRect(140, 260, 89, 25));
        UsuarioTxt = new QLineEdit(centralwidget);
        UsuarioTxt->setObjectName(QString::fromUtf8("UsuarioTxt"));
        UsuarioTxt->setGeometry(QRect(180, 150, 181, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 140, 61, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 200, 91, 17));
        ContraseniaTxt = new QLineEdit(centralwidget);
        ContraseniaTxt->setObjectName(QString::fromUtf8("ContraseniaTxt"));
        ContraseniaTxt->setGeometry(QRect(180, 200, 181, 25));
        ContraseniaTxt->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 60, 171, 41));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);
        Interfaz->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Interfaz);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 476, 22));
        menuLogin = new QMenu(menubar);
        menuLogin->setObjectName(QString::fromUtf8("menuLogin"));
        Interfaz->setMenuBar(menubar);
        statusbar = new QStatusBar(Interfaz);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Interfaz->setStatusBar(statusbar);

        menubar->addAction(menuLogin->menuAction());

        retranslateUi(Interfaz);

        QMetaObject::connectSlotsByName(Interfaz);
    } // setupUi

    void retranslateUi(QMainWindow *Interfaz)
    {
        Interfaz->setWindowTitle(QApplication::translate("Interfaz", "Interfaz", nullptr));
        IngresarBtn->setText(QApplication::translate("Interfaz", "Ingresar", nullptr));
        RegistrarBtn->setText(QApplication::translate("Interfaz", "Registrar", nullptr));
        UsuarioTxt->setText(QString());
        label->setText(QApplication::translate("Interfaz", "Usuario:", nullptr));
        label_2->setText(QApplication::translate("Interfaz", "Contrase\303\261a:", nullptr));
        ContraseniaTxt->setText(QString());
        label_3->setText(QApplication::translate("Interfaz", "Ingreso de Usuario", nullptr));
        menuLogin->setTitle(QApplication::translate("Interfaz", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interfaz: public Ui_Interfaz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZ_H
