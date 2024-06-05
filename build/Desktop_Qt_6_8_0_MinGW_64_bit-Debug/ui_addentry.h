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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addEntry
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDateTimeEdit *dateTimeEdit;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QFontComboBox *fontComboBox;

    void setupUi(QDialog *addEntry)
    {
        if (addEntry->objectName().isEmpty())
            addEntry->setObjectName("addEntry");
        addEntry->resize(400, 300);
        buttonBox = new QDialogButtonBox(addEntry);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(50, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addEntry);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 81, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_3 = new QLabel(addEntry);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 10, 41, 31));
        label_3->setFont(font);
        label_4 = new QLabel(addEntry);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 10, 61, 31));
        label_4->setFont(font);
        label_2 = new QLabel(addEntry);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 10, 81, 31));
        label_2->setFont(font);
        label_5 = new QLabel(addEntry);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 100, 101, 31));
        label_5->setFont(font);
        label_6 = new QLabel(addEntry);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(300, 100, 81, 31));
        label_6->setFont(font);
        label_7 = new QLabel(addEntry);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(300, 170, 91, 31));
        label_7->setFont(font);
        dateTimeEdit = new QDateTimeEdit(addEntry);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(120, 50, 111, 22));
        textEdit = new QTextEdit(addEntry);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 140, 151, 111));
        lineEdit = new QLineEdit(addEntry);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(290, 140, 101, 22));
        lineEdit_3 = new QLineEdit(addEntry);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(320, 50, 71, 22));
        lineEdit_4 = new QLineEdit(addEntry);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(240, 50, 71, 22));
        radioButton = new QRadioButton(addEntry);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 50, 89, 20));
        radioButton_2 = new QRadioButton(addEntry);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(20, 80, 89, 20));
        radioButton_3 = new QRadioButton(addEntry);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(20, 140, 89, 20));
        radioButton_4 = new QRadioButton(addEntry);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(20, 110, 89, 20));
        radioButton_5 = new QRadioButton(addEntry);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setGeometry(QRect(20, 170, 89, 20));
        radioButton_6 = new QRadioButton(addEntry);
        radioButton_6->setObjectName("radioButton_6");
        radioButton_6->setGeometry(QRect(20, 200, 89, 20));
        fontComboBox = new QFontComboBox(addEntry);
        fontComboBox->setObjectName("fontComboBox");
        fontComboBox->setGeometry(QRect(290, 210, 101, 22));

        retranslateUi(addEntry);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addEntry, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addEntry, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addEntry);
    } // setupUi

    void retranslateUi(QDialog *addEntry)
    {
        addEntry->setWindowTitle(QCoreApplication::translate("addEntry", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addEntry", "R\303\251solution", nullptr));
        label_3->setText(QCoreApplication::translate("addEntry", "n\302\260OF", nullptr));
        label_4->setText(QCoreApplication::translate("addEntry", "n\302\260Panne", nullptr));
        label_2->setText(QCoreApplication::translate("addEntry", "D\303\242te/Heure", nullptr));
        label_5->setText(QCoreApplication::translate("addEntry", "Commentaire", nullptr));
        label_6->setText(QCoreApplication::translate("addEntry", "code Article", nullptr));
        label_7->setText(QCoreApplication::translate("addEntry", "Composant", nullptr));
        radioButton->setText(QCoreApplication::translate("addEntry", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("addEntry", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("addEntry", "RadioButton", nullptr));
        radioButton_4->setText(QCoreApplication::translate("addEntry", "RadioButton", nullptr));
        radioButton_5->setText(QCoreApplication::translate("addEntry", "RadioButton", nullptr));
        radioButton_6->setText(QCoreApplication::translate("addEntry", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addEntry: public Ui_addEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDENTRY_H
