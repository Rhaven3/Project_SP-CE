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
    QLineEdit *linePanne;
    QLineEdit *lineComp;
    QTextEdit *Commentaire;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboDate;
    QComboBox *comboOF;

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
        linePanne = new QLineEdit(Edit);
        linePanne->setObjectName("linePanne");
        linePanne->setGeometry(QRect(30, 181, 151, 21));
        lineComp = new QLineEdit(Edit);
        lineComp->setObjectName("lineComp");
        lineComp->setGeometry(QRect(30, 240, 151, 22));
        Commentaire = new QTextEdit(Edit);
        Commentaire->setObjectName("Commentaire");
        Commentaire->setGeometry(QRect(220, 50, 161, 201));
        label_2 = new QLabel(Edit);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 80, 81, 31));
        label_2->setFont(font);
        label_3 = new QLabel(Edit);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 20, 31, 31));
        label_3->setFont(font);
        label_4 = new QLabel(Edit);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 140, 71, 31));
        label_4->setFont(font);
        label_5 = new QLabel(Edit);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 200, 91, 31));
        label_5->setFont(font);
        comboDate = new QComboBox(Edit);
        comboDate->setObjectName("comboDate");
        comboDate->setGeometry(QRect(30, 120, 151, 22));
        comboOF = new QComboBox(Edit);
        comboOF->setObjectName("comboOF");
        comboOF->setGeometry(QRect(30, 60, 151, 22));

        retranslateUi(Edit);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Edit, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Edit, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Edit", "Commentaire", nullptr));
        linePanne->setText(QString());
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
