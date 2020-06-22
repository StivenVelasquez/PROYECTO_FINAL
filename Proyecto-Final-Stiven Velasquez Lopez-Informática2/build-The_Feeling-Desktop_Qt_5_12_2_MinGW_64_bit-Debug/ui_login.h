/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *m_Nombre;
    QLabel *m_Contrasena;
    QLineEdit *Usuario;
    QLineEdit *Contrasena;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->setWindowModality(Qt::ApplicationModal);
        Login->resize(400, 300);
        m_Nombre = new QLabel(Login);
        m_Nombre->setObjectName(QString::fromUtf8("m_Nombre"));
        m_Nombre->setGeometry(QRect(100, 150, 71, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(14);
        m_Nombre->setFont(font);
        m_Nombre->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));
        m_Contrasena = new QLabel(Login);
        m_Contrasena->setObjectName(QString::fromUtf8("m_Contrasena"));
        m_Contrasena->setGeometry(QRect(100, 180, 151, 20));
        m_Contrasena->setFont(font);
        m_Contrasena->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 255, 255);"));
        Usuario = new QLineEdit(Login);
        Usuario->setObjectName(QString::fromUtf8("Usuario"));
        Usuario->setGeometry(QRect(200, 160, 113, 20));
        Usuario->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Contrasena = new QLineEdit(Login);
        Contrasena->setObjectName(QString::fromUtf8("Contrasena"));
        Contrasena->setGeometry(QRect(200, 180, 113, 20));
        Contrasena->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Contrasena->setEchoMode(QLineEdit::Password);
        commandLinkButton = new QCommandLinkButton(Login);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(140, 210, 172, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(14);
        commandLinkButton->setFont(font1);
        commandLinkButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        m_Nombre->setText(QApplication::translate("Login", "Nombre", nullptr));
        m_Contrasena->setText(QApplication::translate("Login", "Contrase\303\261a", nullptr));
        commandLinkButton->setText(QApplication::translate("Login", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
