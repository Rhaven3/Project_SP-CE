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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_LogChoice
{
public:
    QDialogButtonBox *buttonBox;

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

        retranslateUi(LogChoice);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LogChoice, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogChoice, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LogChoice);
    } // setupUi

    void retranslateUi(QDialog *LogChoice)
    {
        LogChoice->setWindowTitle(QCoreApplication::translate("LogChoice", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogChoice: public Ui_LogChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGCHOICE_H
