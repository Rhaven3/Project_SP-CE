/********************************************************************************
** Form generated from reading UI file 'scan.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCAN_H
#define UI_SCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Scan
{
public:
    QTextEdit *textRec;

    void setupUi(QDialog *Scan)
    {
        if (Scan->objectName().isEmpty())
            Scan->setObjectName("Scan");
        Scan->resize(400, 300);
        textRec = new QTextEdit(Scan);
        textRec->setObjectName("textRec");
        textRec->setGeometry(QRect(10, 10, 381, 281));

        retranslateUi(Scan);

        QMetaObject::connectSlotsByName(Scan);
    } // setupUi

    void retranslateUi(QDialog *Scan)
    {
        Scan->setWindowTitle(QCoreApplication::translate("Scan", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Scan: public Ui_Scan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCAN_H
