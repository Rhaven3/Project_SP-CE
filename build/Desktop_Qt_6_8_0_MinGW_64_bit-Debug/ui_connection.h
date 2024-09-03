/********************************************************************************
** Form generated from reading UI file 'connection.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTION_H
#define UI_CONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Connection
{
public:
    QLabel *label;
    QLineEdit *lineID;
    QLineEdit *lineMDP;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *butConnection;
    QLabel *label_erreur3;
    QLabel *label_erreur2;
    QLabel *label_erreur1;

    void setupUi(QDialog *Connection)
    {
        if (Connection->objectName().isEmpty())
            Connection->setObjectName("Connection");
        Connection->resize(240, 220);
        label = new QLabel(Connection);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 141, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        lineID = new QLineEdit(Connection);
        lineID->setObjectName("lineID");
        lineID->setGeometry(QRect(30, 80, 161, 22));
        lineMDP = new QLineEdit(Connection);
        lineMDP->setObjectName("lineMDP");
        lineMDP->setGeometry(QRect(30, 150, 161, 22));
        label_2 = new QLabel(Connection);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 60, 71, 16));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(Connection);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 130, 91, 16));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        label_3->setFont(font2);
        butConnection = new QPushButton(Connection);
        butConnection->setObjectName("butConnection");
        butConnection->setGeometry(QRect(114, 180, 111, 31));
        butConnection->setFont(font1);
        label_erreur3 = new QLabel(Connection);
        label_erreur3->setObjectName("label_erreur3");
        label_erreur3->setGeometry(QRect(10, 180, 91, 31));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_erreur3->setPalette(palette);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Yu Gothic")});
        font3.setPointSize(10);
        font3.setBold(false);
        label_erreur3->setFont(font3);
        label_erreur2 = new QLabel(Connection);
        label_erreur2->setObjectName("label_erreur2");
        label_erreur2->setGeometry(QRect(80, 30, 111, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_erreur2->setPalette(palette1);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Yu Gothic")});
        font4.setPointSize(9);
        font4.setBold(false);
        label_erreur2->setFont(font4);
        label_erreur1 = new QLabel(Connection);
        label_erreur1->setObjectName("label_erreur1");
        label_erreur1->setGeometry(QRect(40, 30, 41, 16));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Yu Gothic")});
        label_erreur1->setFont(font5);

        retranslateUi(Connection);

        QMetaObject::connectSlotsByName(Connection);
    } // setupUi

    void retranslateUi(QDialog *Connection)
    {
        Connection->setWindowTitle(QCoreApplication::translate("Connection", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Connection", "Connection Eur\303\252ka", nullptr));
        label_2->setText(QCoreApplication::translate("Connection", "Identifiant", nullptr));
        label_3->setText(QCoreApplication::translate("Connection", "Mot de Passe", nullptr));
        butConnection->setText(QCoreApplication::translate("Connection", "Connection", nullptr));
        label_erreur3->setText(QCoreApplication::translate("Connection", "Connection \n"
" \303\251chou\303\251e !!", nullptr));
        label_erreur2->setText(QCoreApplication::translate("Connection", "ID ou MDP invalide", nullptr));
        label_erreur1->setText(QCoreApplication::translate("Connection", "Erreur:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connection: public Ui_Connection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTION_H
