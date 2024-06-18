/********************************************************************************
** Form generated from reading UI file 'addentry.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDENTRY_H
#define UI_ADDENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_addEntry
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QTimeEdit *timeEdit;
    QFrame *ComRes;
    QTextEdit *textEdit;
    QLabel *label_2;
    QCheckBox *R2;
    QCheckBox *R3;
    QCheckBox *R4;
    QCheckBox *R5;
    QCheckBox *R6;
    QCheckBox *R1;
    QCheckBox *R7;
    QLabel *label_6;
    QLabel *label_5;
    QFrame *addDate;
    QComboBox *comboYear;
    QComboBox *comboDay;
    QComboBox *comboMonth;
    QFrame *addDatePlus;
    QCalendarWidget *calendarDate;
    QComboBox *comboCarte;
    QComboBox *comboComp;
    QLabel *label_7;
    QComboBox *comboState;

    void setupUi(QDialog *addEntry)
    {
        if (addEntry->objectName().isEmpty())
            addEntry->setObjectName("addEntry");
        addEntry->resize(465, 300);
        buttonBox = new QDialogButtonBox(addEntry);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(300, 260, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addEntry);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 41, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_3 = new QLabel(addEntry);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 20, 81, 21));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_4 = new QLabel(addEntry);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 90, 49, 16));
        label_4->setFont(font1);
        timeEdit = new QTimeEdit(addEntry);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(390, 90, 61, 22));
        ComRes = new QFrame(addEntry);
        ComRes->setObjectName("ComRes");
        ComRes->setGeometry(QRect(10, 10, 281, 281));
        ComRes->setFrameShape(QFrame::StyledPanel);
        ComRes->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(ComRes);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(100, 70, 181, 211));
        label_2 = new QLabel(ComRes);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 40, 101, 21));
        label_2->setFont(font1);
        R2 = new QCheckBox(ComRes);
        R2->setObjectName("R2");
        R2->setGeometry(QRect(10, 70, 76, 20));
        R3 = new QCheckBox(ComRes);
        R3->setObjectName("R3");
        R3->setGeometry(QRect(10, 100, 76, 20));
        R4 = new QCheckBox(ComRes);
        R4->setObjectName("R4");
        R4->setGeometry(QRect(10, 130, 76, 20));
        R5 = new QCheckBox(ComRes);
        R5->setObjectName("R5");
        R5->setGeometry(QRect(10, 160, 76, 20));
        R6 = new QCheckBox(ComRes);
        R6->setObjectName("R6");
        R6->setGeometry(QRect(10, 190, 76, 20));
        R1 = new QCheckBox(ComRes);
        R1->setObjectName("R1");
        R1->setGeometry(QRect(10, 40, 76, 20));
        R7 = new QCheckBox(ComRes);
        R7->setObjectName("R7");
        R7->setGeometry(QRect(10, 220, 76, 20));
        label_6 = new QLabel(ComRes);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 81, 16));
        label_6->setFont(font1);
        label_5 = new QLabel(addEntry);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 130, 101, 21));
        label_5->setFont(font1);
        addDate = new QFrame(addEntry);
        addDate->setObjectName("addDate");
        addDate->setGeometry(QRect(300, 50, 151, 31));
        addDate->setFrameShape(QFrame::StyledPanel);
        addDate->setFrameShadow(QFrame::Raised);
        comboYear = new QComboBox(addDate);
        comboYear->setObjectName("comboYear");
        comboYear->setGeometry(QRect(80, 0, 69, 22));
        comboDay = new QComboBox(addDate);
        comboDay->setObjectName("comboDay");
        comboDay->setGeometry(QRect(0, 0, 41, 22));
        comboMonth = new QComboBox(addDate);
        comboMonth->setObjectName("comboMonth");
        comboMonth->setGeometry(QRect(40, 0, 41, 22));
        addDatePlus = new QFrame(addEntry);
        addDatePlus->setObjectName("addDatePlus");
        addDatePlus->setGeometry(QRect(10, 80, 291, 191));
        addDatePlus->setFrameShape(QFrame::StyledPanel);
        addDatePlus->setFrameShadow(QFrame::Raised);
        calendarDate = new QCalendarWidget(addDatePlus);
        calendarDate->setObjectName("calendarDate");
        calendarDate->setGeometry(QRect(0, 0, 281, 191));
        comboCarte = new QComboBox(addEntry);
        comboCarte->setObjectName("comboCarte");
        comboCarte->setGeometry(QRect(180, 10, 121, 22));
        comboComp = new QComboBox(addEntry);
        comboComp->setObjectName("comboComp");
        comboComp->setGeometry(QRect(300, 160, 151, 22));
        label_7 = new QLabel(addEntry);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(310, 200, 49, 16));
        label_7->setFont(font1);
        comboState = new QComboBox(addEntry);
        comboState->addItem(QString());
        comboState->addItem(QString());
        comboState->addItem(QString());
        comboState->setObjectName("comboState");
        comboState->setGeometry(QRect(300, 220, 151, 22));
        addDatePlus->raise();
        buttonBox->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        timeEdit->raise();
        ComRes->raise();
        label_5->raise();
        addDate->raise();
        comboCarte->raise();
        comboComp->raise();
        label_7->raise();
        comboState->raise();

        retranslateUi(addEntry);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addEntry, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addEntry, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addEntry);
    } // setupUi

    void retranslateUi(QDialog *addEntry)
    {
        addEntry->setWindowTitle(QCoreApplication::translate("addEntry", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addEntry", "Carte", nullptr));
        label_3->setText(QCoreApplication::translate("addEntry", "Date", nullptr));
        label_4->setText(QCoreApplication::translate("addEntry", "Heure", nullptr));
        label_2->setText(QCoreApplication::translate("addEntry", "Commentaire", nullptr));
        R2->setText(QCoreApplication::translate("addEntry", "R\303\251stype2", nullptr));
        R3->setText(QCoreApplication::translate("addEntry", "R\303\251stype3", nullptr));
        R4->setText(QCoreApplication::translate("addEntry", "R\303\251stype4", nullptr));
        R5->setText(QCoreApplication::translate("addEntry", "R\303\251stype5", nullptr));
        R6->setText(QCoreApplication::translate("addEntry", "R\303\251stype6", nullptr));
        R1->setText(QCoreApplication::translate("addEntry", "R\303\251stype1", nullptr));
        R7->setText(QCoreApplication::translate("addEntry", "R\303\251stype7", nullptr));
        label_6->setText(QCoreApplication::translate("addEntry", "R\303\251solution", nullptr));
        label_5->setText(QCoreApplication::translate("addEntry", "Composant(s)", nullptr));
        label_7->setText(QCoreApplication::translate("addEntry", "Statut", nullptr));
        comboState->setItemText(0, QCoreApplication::translate("addEntry", "Non R\303\251solu", nullptr));
        comboState->setItemText(1, QCoreApplication::translate("addEntry", "En R\303\251solution...", nullptr));
        comboState->setItemText(2, QCoreApplication::translate("addEntry", "R\303\251solu", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addEntry: public Ui_addEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDENTRY_H
