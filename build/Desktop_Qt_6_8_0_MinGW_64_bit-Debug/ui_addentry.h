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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
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
    QTextEdit *Commentaire;
    QLineEdit *lineArticle;
    QLineEdit *linePanne;
    QLineEdit *lineFIC;
    QRadioButton *R1;
    QRadioButton *R2;
    QRadioButton *R4;
    QRadioButton *R3;
    QRadioButton *R5;
    QRadioButton *R6;
    QLineEdit *lineiFIC;
    QLabel *label_8;
    QComboBox *comboComp;
    QLabel *label_9;
    QComboBox *comboCarte;
    QRadioButton *R0;

    void setupUi(QDialog *addEntry)
    {
        if (addEntry->objectName().isEmpty())
            addEntry->setObjectName("addEntry");
        addEntry->resize(424, 346);
        buttonBox = new QDialogButtonBox(addEntry);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(60, 310, 341, 32));
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
        label_3->setGeometry(QRect(260, 10, 31, 31));
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
        label_7->setGeometry(QRect(300, 220, 91, 31));
        label_7->setFont(font);
        dateTimeEdit = new QDateTimeEdit(addEntry);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(120, 50, 111, 22));
        Commentaire = new QTextEdit(addEntry);
        Commentaire->setObjectName("Commentaire");
        Commentaire->setGeometry(QRect(120, 140, 151, 161));
        lineArticle = new QLineEdit(addEntry);
        lineArticle->setObjectName("lineArticle");
        lineArticle->setGeometry(QRect(290, 140, 101, 22));
        linePanne = new QLineEdit(addEntry);
        linePanne->setObjectName("linePanne");
        linePanne->setGeometry(QRect(320, 50, 71, 22));
        lineFIC = new QLineEdit(addEntry);
        lineFIC->setObjectName("lineFIC");
        lineFIC->setGeometry(QRect(240, 50, 71, 22));
        R1 = new QRadioButton(addEntry);
        R1->setObjectName("R1");
        R1->setGeometry(QRect(20, 50, 89, 20));
        R2 = new QRadioButton(addEntry);
        R2->setObjectName("R2");
        R2->setGeometry(QRect(20, 80, 89, 20));
        R4 = new QRadioButton(addEntry);
        R4->setObjectName("R4");
        R4->setGeometry(QRect(20, 140, 89, 20));
        R3 = new QRadioButton(addEntry);
        R3->setObjectName("R3");
        R3->setGeometry(QRect(20, 110, 89, 20));
        R5 = new QRadioButton(addEntry);
        R5->setObjectName("R5");
        R5->setGeometry(QRect(20, 170, 89, 20));
        R6 = new QRadioButton(addEntry);
        R6->setObjectName("R6");
        R6->setGeometry(QRect(20, 200, 89, 20));
        lineiFIC = new QLineEdit(addEntry);
        lineiFIC->setObjectName("lineiFIC");
        lineiFIC->setGeometry(QRect(280, 70, 31, 22));
        label_8 = new QLabel(addEntry);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(240, 70, 41, 21));
        QFont font1;
        font1.setPointSize(10);
        label_8->setFont(font1);
        comboComp = new QComboBox(addEntry);
        comboComp->setObjectName("comboComp");
        comboComp->setGeometry(QRect(290, 260, 101, 22));
        label_9 = new QLabel(addEntry);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(310, 160, 61, 31));
        label_9->setFont(font);
        comboCarte = new QComboBox(addEntry);
        comboCarte->setObjectName("comboCarte");
        comboCarte->setGeometry(QRect(290, 200, 101, 22));
        R0 = new QRadioButton(addEntry);
        R0->setObjectName("R0");
        R0->setGeometry(QRect(20, 240, 89, 20));

        retranslateUi(addEntry);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addEntry, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addEntry, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addEntry);
    } // setupUi

    void retranslateUi(QDialog *addEntry)
    {
        addEntry->setWindowTitle(QCoreApplication::translate("addEntry", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addEntry", "R\303\251solution", nullptr));
        label_3->setText(QCoreApplication::translate("addEntry", "FIC", nullptr));
        label_4->setText(QCoreApplication::translate("addEntry", "n\302\260Panne", nullptr));
        label_2->setText(QCoreApplication::translate("addEntry", "D\303\242te/Heure", nullptr));
        label_5->setText(QCoreApplication::translate("addEntry", "Commentaire", nullptr));
        label_6->setText(QCoreApplication::translate("addEntry", "code Article", nullptr));
        label_7->setText(QCoreApplication::translate("addEntry", "Composant", nullptr));
        R1->setText(QCoreApplication::translate("addEntry", "R\303\251sType1", nullptr));
        R2->setText(QCoreApplication::translate("addEntry", "R\303\251sType2", nullptr));
        R4->setText(QCoreApplication::translate("addEntry", "R\303\251sType4", nullptr));
        R3->setText(QCoreApplication::translate("addEntry", "R\303\251sType3", nullptr));
        R5->setText(QCoreApplication::translate("addEntry", "R\303\251sType5", nullptr));
        R6->setText(QCoreApplication::translate("addEntry", "R\303\251sType6", nullptr));
        label_8->setText(QCoreApplication::translate("addEntry", "indice", nullptr));
        label_9->setText(QCoreApplication::translate("addEntry", "n\302\260Carte", nullptr));
        R0->setText(QCoreApplication::translate("addEntry", "Non R\303\251solu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addEntry: public Ui_addEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDENTRY_H
