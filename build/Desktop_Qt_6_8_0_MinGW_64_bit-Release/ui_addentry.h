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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addEntry
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_5;
    QComboBox *comboCarte;
    QComboBox *comboComp;
    QLabel *label_7;
    QComboBox *comboState;
    QTextEdit *textEdit;
    QLabel *label_2;
    QCheckBox *R6;
    QCheckBox *R3;
    QCheckBox *R7;
    QCheckBox *R2;
    QLabel *label_6;
    QCheckBox *R1;
    QCheckBox *R4;
    QCheckBox *R5;

    void setupUi(QDialog *addEntry)
    {
        if (addEntry->objectName().isEmpty())
            addEntry->setObjectName("addEntry");
        addEntry->resize(465, 270);
        buttonBox = new QDialogButtonBox(addEntry);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(300, 230, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addEntry);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 10, 41, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_5 = new QLabel(addEntry);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 90, 101, 21));
        QFont font1;
        font1.setPointSize(12);
        label_5->setFont(font1);
        comboCarte = new QComboBox(addEntry);
        comboCarte->setObjectName("comboCarte");
        comboCarte->setGeometry(QRect(310, 30, 121, 22));
        comboComp = new QComboBox(addEntry);
        comboComp->setObjectName("comboComp");
        comboComp->setGeometry(QRect(300, 120, 151, 22));
        label_7 = new QLabel(addEntry);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(310, 160, 49, 16));
        label_7->setFont(font1);
        comboState = new QComboBox(addEntry);
        comboState->addItem(QString());
        comboState->addItem(QString());
        comboState->addItem(QString());
        comboState->setObjectName("comboState");
        comboState->setGeometry(QRect(300, 180, 151, 22));
        textEdit = new QTextEdit(addEntry);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 50, 171, 211));
        label_2 = new QLabel(addEntry);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 20, 101, 21));
        label_2->setFont(font1);
        R6 = new QCheckBox(addEntry);
        R6->setObjectName("R6");
        R6->setGeometry(QRect(20, 200, 76, 20));
        R3 = new QCheckBox(addEntry);
        R3->setObjectName("R3");
        R3->setGeometry(QRect(20, 110, 76, 20));
        R7 = new QCheckBox(addEntry);
        R7->setObjectName("R7");
        R7->setGeometry(QRect(20, 230, 76, 20));
        R2 = new QCheckBox(addEntry);
        R2->setObjectName("R2");
        R2->setGeometry(QRect(20, 80, 76, 20));
        label_6 = new QLabel(addEntry);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 20, 81, 16));
        label_6->setFont(font1);
        R1 = new QCheckBox(addEntry);
        R1->setObjectName("R1");
        R1->setGeometry(QRect(20, 50, 76, 20));
        R4 = new QCheckBox(addEntry);
        R4->setObjectName("R4");
        R4->setGeometry(QRect(20, 140, 76, 20));
        R5 = new QCheckBox(addEntry);
        R5->setObjectName("R5");
        R5->setGeometry(QRect(20, 170, 76, 20));

        retranslateUi(addEntry);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addEntry, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addEntry, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addEntry);
    } // setupUi

    void retranslateUi(QDialog *addEntry)
    {
        addEntry->setWindowTitle(QCoreApplication::translate("addEntry", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addEntry", "Carte", nullptr));
        label_5->setText(QCoreApplication::translate("addEntry", "Composant(s)", nullptr));
        label_7->setText(QCoreApplication::translate("addEntry", "Statut", nullptr));
        comboState->setItemText(0, QCoreApplication::translate("addEntry", "Non R\303\251solu", nullptr));
        comboState->setItemText(1, QCoreApplication::translate("addEntry", "En R\303\251solution...", nullptr));
        comboState->setItemText(2, QCoreApplication::translate("addEntry", "R\303\251solu", nullptr));

        label_2->setText(QCoreApplication::translate("addEntry", "Commentaire", nullptr));
        R6->setText(QCoreApplication::translate("addEntry", "R\303\251stype6", nullptr));
        R3->setText(QCoreApplication::translate("addEntry", "R\303\251stype3", nullptr));
        R7->setText(QCoreApplication::translate("addEntry", "R\303\251stype7", nullptr));
        R2->setText(QCoreApplication::translate("addEntry", "R\303\251stype2", nullptr));
        label_6->setText(QCoreApplication::translate("addEntry", "R\303\251solution", nullptr));
        R1->setText(QCoreApplication::translate("addEntry", "R\303\251stype1", nullptr));
        R4->setText(QCoreApplication::translate("addEntry", "R\303\251stype4", nullptr));
        R5->setText(QCoreApplication::translate("addEntry", "R\303\251stype5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addEntry: public Ui_addEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDENTRY_H
