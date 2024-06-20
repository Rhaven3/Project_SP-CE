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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *butEntry;
    QPushButton *butRec;
    QComboBox *comboCarte;
    QLabel *label;
    QTableWidget *tableLogs;
    QGraphicsView *graphic2;
    QGraphicsView *graphic1;
    QGroupBox *groupBox;
    QLCDNumber *NumNRes;
    QLCDNumber *Num;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *NumTotal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(950, 585);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        butEntry = new QPushButton(centralwidget);
        butEntry->setObjectName("butEntry");
        butEntry->setGeometry(QRect(20, 490, 201, 51));
        butRec = new QPushButton(centralwidget);
        butRec->setObjectName("butRec");
        butRec->setGeometry(QRect(440, 490, 201, 51));
        comboCarte = new QComboBox(centralwidget);
        comboCarte->setObjectName("comboCarte");
        comboCarte->setGeometry(QRect(230, 511, 201, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 480, 201, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        tableLogs = new QTableWidget(centralwidget);
        tableLogs->setObjectName("tableLogs");
        tableLogs->setGeometry(QRect(20, 10, 621, 471));
        graphic2 = new QGraphicsView(centralwidget);
        graphic2->setObjectName("graphic2");
        graphic2->setGeometry(QRect(660, 350, 281, 192));
        graphic1 = new QGraphicsView(centralwidget);
        graphic1->setObjectName("graphic1");
        graphic1->setGeometry(QRect(660, 140, 281, 192));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(660, 9, 281, 121));
        NumNRes = new QLCDNumber(groupBox);
        NumNRes->setObjectName("NumNRes");
        NumNRes->setGeometry(QRect(110, 60, 151, 23));
        Num = new QLCDNumber(groupBox);
        Num->setObjectName("Num");
        Num->setGeometry(QRect(110, 90, 151, 23));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 60, 71, 20));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(28, 90, 61, 20));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 30, 49, 16));
        label_4->setFont(font);
        NumTotal = new QLCDNumber(groupBox);
        NumTotal->setObjectName("NumTotal");
        NumTotal->setGeometry(QRect(110, 30, 151, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 950, 22));
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
        butEntry->setText(QCoreApplication::translate("MainWindow", "Ajouter / Modifier", nullptr));
        butRec->setText(QCoreApplication::translate("MainWindow", "Recherche de R\303\251curence", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Les Cartes", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Compteur de Pannes", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Non R\303\251solu", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "textLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
