/********************************************************************************
** Form generated from reading UI file 'error.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Error
{
public:
    QLabel *ErrorLabel;

    void setupUi(QWidget *Error)
    {
        if (Error->objectName().isEmpty())
            Error->setObjectName("Error");
        Error->resize(400, 300);
        ErrorLabel = new QLabel(Error);
        ErrorLabel->setObjectName("ErrorLabel");
        ErrorLabel->setGeometry(QRect(20, 20, 351, 251));
        QFont font;
        font.setPointSize(10);
        ErrorLabel->setFont(font);
        ErrorLabel->setScaledContents(false);
        ErrorLabel->setWordWrap(true);

        retranslateUi(Error);

        QMetaObject::connectSlotsByName(Error);
    } // setupUi

    void retranslateUi(QWidget *Error)
    {
        Error->setWindowTitle(QCoreApplication::translate("Error", "Form", nullptr));
        ErrorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Error: public Ui_Error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
