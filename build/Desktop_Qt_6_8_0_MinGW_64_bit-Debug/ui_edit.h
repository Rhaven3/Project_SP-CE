/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QComboBox *comboBox_2;

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName("Edit");
        Edit->resize(400, 300);
        buttonBox = new QDialogButtonBox(Edit);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(50, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Edit);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 10, 101, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        lineEdit = new QLineEdit(Edit);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 180, 151, 22));
        lineEdit_2 = new QLineEdit(Edit);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 240, 151, 22));
        textEdit = new QTextEdit(Edit);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(220, 50, 161, 201));
        label_2 = new QLabel(Edit);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 20, 81, 31));
        label_2->setFont(font);
        label_3 = new QLabel(Edit);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 80, 31, 31));
        label_3->setFont(font);
        label_4 = new QLabel(Edit);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 140, 71, 31));
        label_4->setFont(font);
        label_5 = new QLabel(Edit);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 200, 91, 31));
        label_5->setFont(font);
        comboBox = new QComboBox(Edit);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(30, 60, 151, 22));
        comboBox_2 = new QComboBox(Edit);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(30, 120, 151, 22));

        retranslateUi(Edit);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Edit, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Edit, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Edit", "Commentaire", nullptr));
        label_2->setText(QCoreApplication::translate("Edit", "D\303\242te/Heure", nullptr));
        label_3->setText(QCoreApplication::translate("Edit", "OF", nullptr));
        label_4->setText(QCoreApplication::translate("Edit", "n\302\260Panne", nullptr));
        label_5->setText(QCoreApplication::translate("Edit", "Composant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
