/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *butAddEntry;
    QPushButton *butScan;
    QTextEdit *LogView;
    QComboBox *comboCarte;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        butAddEntry = new QPushButton(centralwidget);
        butAddEntry->setObjectName("butAddEntry");
        butAddEntry->setGeometry(QRect(30, 500, 241, 51));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(butAddEntry->sizePolicy().hasHeightForWidth());
        butAddEntry->setSizePolicy(sizePolicy);
        butScan = new QPushButton(centralwidget);
        butScan->setObjectName("butScan");
        butScan->setGeometry(QRect(530, 500, 241, 51));
        sizePolicy.setHeightForWidth(butScan->sizePolicy().hasHeightForWidth());
        butScan->setSizePolicy(sizePolicy);
        LogView = new QTextEdit(centralwidget);
        LogView->setObjectName("LogView");
        LogView->setGeometry(QRect(30, 20, 741, 461));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LogView->sizePolicy().hasHeightForWidth());
        LogView->setSizePolicy(sizePolicy1);
        comboCarte = new QComboBox(centralwidget);
        comboCarte->setObjectName("comboCarte");
        comboCarte->setGeometry(QRect(290, 521, 221, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 490, 121, 21));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        butAddEntry->setText(QCoreApplication::translate("MainWindow", "Ajouter / Modifier", nullptr));
        butScan->setText(QCoreApplication::translate("MainWindow", "Recherche de R\303\251currence", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Carte S\303\251lectionn\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
