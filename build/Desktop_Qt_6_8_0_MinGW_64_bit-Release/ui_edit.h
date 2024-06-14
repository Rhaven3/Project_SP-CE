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
#include <QtWidgets/QRadioButton>
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
    QRadioButton *radioNRes;
    QRadioButton *radioRes;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineCarte;
    QLineEdit *lineArticle;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineFIC;
    QLineEdit *lineiFIC;

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName("Edit");
        Edit->resize(558, 337);
        buttonBox = new QDialogButtonBox(Edit);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(370, 300, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Edit);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 20, 101, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        linePanne = new QLineEdit(Edit);
        linePanne->setObjectName("linePanne");
        linePanne->setGeometry(QRect(10, 181, 151, 21));
        lineComp = new QLineEdit(Edit);
        lineComp->setObjectName("lineComp");
        lineComp->setGeometry(QRect(10, 240, 151, 22));
        Commentaire = new QTextEdit(Edit);
        Commentaire->setObjectName("Commentaire");
        Commentaire->setGeometry(QRect(380, 60, 161, 231));
        label_2 = new QLabel(Edit);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 80, 81, 31));
        label_2->setFont(font);
        label_3 = new QLabel(Edit);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 20, 31, 31));
        label_3->setFont(font);
        label_4 = new QLabel(Edit);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 140, 71, 31));
        label_4->setFont(font);
        label_5 = new QLabel(Edit);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 200, 91, 31));
        label_5->setFont(font);
        comboDate = new QComboBox(Edit);
        comboDate->setObjectName("comboDate");
        comboDate->setGeometry(QRect(10, 120, 151, 22));
        comboOF = new QComboBox(Edit);
        comboOF->setObjectName("comboOF");
        comboOF->setGeometry(QRect(10, 60, 151, 22));
        radioNRes = new QRadioButton(Edit);
        radioNRes->setObjectName("radioNRes");
        radioNRes->setGeometry(QRect(220, 270, 101, 20));
        QFont font1;
        font1.setPointSize(11);
        radioNRes->setFont(font1);
        radioRes = new QRadioButton(Edit);
        radioRes->setObjectName("radioRes");
        radioRes->setGeometry(QRect(220, 240, 89, 20));
        radioRes->setFont(font1);
        label_6 = new QLabel(Edit);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(230, 20, 71, 31));
        label_6->setFont(font);
        label_7 = new QLabel(Edit);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 80, 91, 31));
        label_7->setFont(font);
        lineCarte = new QLineEdit(Edit);
        lineCarte->setObjectName("lineCarte");
        lineCarte->setGeometry(QRect(190, 61, 151, 21));
        lineArticle = new QLineEdit(Edit);
        lineArticle->setObjectName("lineArticle");
        lineArticle->setGeometry(QRect(190, 120, 151, 22));
        label_8 = new QLabel(Edit);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(250, 140, 31, 31));
        label_8->setFont(font);
        label_9 = new QLabel(Edit);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(210, 200, 41, 31));
        label_9->setFont(font1);
        lineFIC = new QLineEdit(Edit);
        lineFIC->setObjectName("lineFIC");
        lineFIC->setGeometry(QRect(210, 181, 111, 21));
        lineiFIC = new QLineEdit(Edit);
        lineiFIC->setObjectName("lineiFIC");
        lineiFIC->setGeometry(QRect(260, 210, 61, 21));

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
        radioNRes->setText(QCoreApplication::translate("Edit", "Non R\303\251solu", nullptr));
        radioRes->setText(QCoreApplication::translate("Edit", "R\303\251solu", nullptr));
        label_6->setText(QCoreApplication::translate("Edit", "n\302\260Carte", nullptr));
        label_7->setText(QCoreApplication::translate("Edit", "Code Article", nullptr));
        lineCarte->setText(QString());
        label_8->setText(QCoreApplication::translate("Edit", "FIC", nullptr));
        label_9->setText(QCoreApplication::translate("Edit", "Indice", nullptr));
        lineFIC->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
