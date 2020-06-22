/********************************************************************************
** Form generated from reading UI file 'registrar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRAR_H
#define UI_REGISTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registrar
{
public:
    QLineEdit *Usuario;
    QLabel *m_Contrasena;
    QLabel *m_Nombre;
    QLineEdit *Contrasena;
    QCommandLinkButton *commandLinkButton;
    QLabel *m_ConfirmarCon;
    QLineEdit *ConfirmarCon;

    void setupUi(QWidget *Registrar)
    {
        if (Registrar->objectName().isEmpty())
            Registrar->setObjectName(QString::fromUtf8("Registrar"));
        Registrar->setWindowModality(Qt::ApplicationModal);
        Registrar->resize(400, 288);
        Usuario = new QLineEdit(Registrar);
        Usuario->setObjectName(QString::fromUtf8("Usuario"));
        Usuario->setGeometry(QRect(260, 170, 113, 20));
        Usuario->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        m_Contrasena = new QLabel(Registrar);
        m_Contrasena->setObjectName(QString::fromUtf8("m_Contrasena"));
        m_Contrasena->setGeometry(QRect(50, 190, 151, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(14);
        m_Contrasena->setFont(font);
        m_Contrasena->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 255, 255);"));
        m_Nombre = new QLabel(Registrar);
        m_Nombre->setObjectName(QString::fromUtf8("m_Nombre"));
        m_Nombre->setGeometry(QRect(50, 160, 71, 31));
        m_Nombre->setFont(font);
        m_Nombre->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));
        Contrasena = new QLineEdit(Registrar);
        Contrasena->setObjectName(QString::fromUtf8("Contrasena"));
        Contrasena->setGeometry(QRect(260, 190, 113, 20));
        Contrasena->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Contrasena->setEchoMode(QLineEdit::Password);
        commandLinkButton = new QCommandLinkButton(Registrar);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(140, 240, 172, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(14);
        commandLinkButton->setFont(font1);
        commandLinkButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        m_ConfirmarCon = new QLabel(Registrar);
        m_ConfirmarCon->setObjectName(QString::fromUtf8("m_ConfirmarCon"));
        m_ConfirmarCon->setGeometry(QRect(50, 210, 201, 20));
        m_ConfirmarCon->setFont(font);
        m_ConfirmarCon->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 255);"));
        ConfirmarCon = new QLineEdit(Registrar);
        ConfirmarCon->setObjectName(QString::fromUtf8("ConfirmarCon"));
        ConfirmarCon->setGeometry(QRect(260, 210, 113, 20));
        ConfirmarCon->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        ConfirmarCon->setEchoMode(QLineEdit::Password);

        retranslateUi(Registrar);

        QMetaObject::connectSlotsByName(Registrar);
    } // setupUi

    void retranslateUi(QWidget *Registrar)
    {
        Registrar->setWindowTitle(QApplication::translate("Registrar", "Registro", nullptr));
        m_Contrasena->setText(QApplication::translate("Registrar", "Contrase\303\261a", nullptr));
        m_Nombre->setText(QApplication::translate("Registrar", "Nombre", nullptr));
        commandLinkButton->setText(QApplication::translate("Registrar", "Registrarse", nullptr));
        m_ConfirmarCon->setText(QApplication::translate("Registrar", "Confirmar Contrase\303\261a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registrar: public Ui_Registrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRAR_H
