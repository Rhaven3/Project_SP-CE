/********************************************************************************
** Form generated from reading UI file 'logchoice.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGCHOICE_H
#define UI_LOGCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_LogChoice
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QRadioButton *NoDepanned;
    QRadioButton *Depanned;
    QComboBox *comboSearch;
    QLineEdit *Search;
    QLabel *label_2;

    void setupUi(QDialog *LogChoice)
    {
        if (LogChoice->objectName().isEmpty())
            LogChoice->setObjectName("LogChoice");
        LogChoice->resize(400, 300);
        buttonBox = new QDialogButtonBox(LogChoice);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(LogChoice);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 261, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        NoDepanned = new QRadioButton(LogChoice);
        NoDepanned->setObjectName("NoDepanned");
        NoDepanned->setGeometry(QRect(50, 69, 121, 41));
        NoDepanned->setFont(font);
        Depanned = new QRadioButton(LogChoice);
        Depanned->setObjectName("Depanned");
        Depanned->setGeometry(QRect(50, 110, 131, 41));
        Depanned->setFont(font);
        comboSearch = new QComboBox(LogChoice);
        comboSearch->setObjectName("comboSearch");
        comboSearch->setGeometry(QRect(220, 120, 131, 22));
        Search = new QLineEdit(LogChoice);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(220, 90, 113, 22));
        label_2 = new QLabel(LogChoice);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 65, 71, 21));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);

        retranslateUi(LogChoice);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LogChoice, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogChoice, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LogChoice);
    } // setupUi

    void retranslateUi(QDialog *LogChoice)
    {
        LogChoice->setWindowTitle(QCoreApplication::translate("LogChoice", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LogChoice", "Qu'elles Logs voulez-vous visionner ?", nullptr));
        NoDepanned->setText(QCoreApplication::translate("LogChoice", "\303\200 D\303\251panner", nullptr));
        Depanned->setText(QCoreApplication::translate("LogChoice", "D\303\251j\303\240 D\303\251pann\303\251es", nullptr));
        label_2->setText(QCoreApplication::translate("LogChoice", "Recherche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogChoice: public Ui_LogChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGCHOICE_H
