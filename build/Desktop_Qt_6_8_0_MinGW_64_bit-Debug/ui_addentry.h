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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QTextEdit *textcomment;
    QLabel *label_2;
    QLabel *label_6;
    QGroupBox *defComp;
    QCheckBox *checkHS;
    QCheckBox *checkPolarite;
    QCheckBox *checkabsent;
    QCheckBox *checkbrise;
    QGroupBox *defCI;
    QCheckBox *checkpontseri;
    QCheckBox *checkPiste;
    QGroupBox *defSoudure;
    QCheckBox *checkabsente;
    QCheckBox *checkseche;
    QCheckBox *checkmanhatan;
    QCheckBox *checkpont;
    QGroupBox *defAutre;
    QCheckBox *checkautre;
    QTextEdit *textDefAutre;
    QLineEdit *lineArticle;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineOF;
    QLabel *label_8;
    QLineEdit *lineFIC;
    QLabel *label_9;
    QLineEdit *lineIFIC;
    QLabel *label_10;
    QLineEdit *linePanne;
    QLineEdit *lineDesPanne;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineMesure;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineMin;
    QLineEdit *lineMax;
    QLabel *label_15;
    QTextEdit *textIndicPanne;
    QComboBox *comboPoste;
    QLabel *label_16;

    void setupUi(QDialog *addEntry)
    {
        if (addEntry->objectName().isEmpty())
            addEntry->setObjectName("addEntry");
        addEntry->resize(583, 416);
        buttonBox = new QDialogButtonBox(addEntry);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(410, 380, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addEntry);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 20, 41, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_5 = new QLabel(addEntry);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 200, 101, 21));
        label_5->setFont(font);
        comboCarte = new QComboBox(addEntry);
        comboCarte->setObjectName("comboCarte");
        comboCarte->setGeometry(QRect(270, 40, 131, 22));
        comboComp = new QComboBox(addEntry);
        comboComp->setObjectName("comboComp");
        comboComp->setGeometry(QRect(270, 230, 131, 22));
        label_7 = new QLabel(addEntry);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(460, 310, 49, 16));
        QFont font1;
        font1.setPointSize(12);
        label_7->setFont(font1);
        comboState = new QComboBox(addEntry);
        comboState->addItem(QString());
        comboState->addItem(QString());
        comboState->addItem(QString());
        comboState->setObjectName("comboState");
        comboState->setGeometry(QRect(410, 330, 151, 22));
        textcomment = new QTextEdit(addEntry);
        textcomment->setObjectName("textcomment");
        textcomment->setGeometry(QRect(10, 300, 231, 111));
        label_2 = new QLabel(addEntry);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 270, 101, 21));
        label_2->setFont(font1);
        label_6 = new QLabel(addEntry);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 10, 51, 16));
        QFont font2;
        font2.setPointSize(13);
        label_6->setFont(font2);
        defComp = new QGroupBox(addEntry);
        defComp->setObjectName("defComp");
        defComp->setGeometry(QRect(10, 50, 120, 111));
        checkHS = new QCheckBox(defComp);
        checkHS->setObjectName("checkHS");
        checkHS->setGeometry(QRect(10, 20, 76, 20));
        checkPolarite = new QCheckBox(defComp);
        checkPolarite->setObjectName("checkPolarite");
        checkPolarite->setGeometry(QRect(10, 40, 61, 20));
        checkabsent = new QCheckBox(defComp);
        checkabsent->setObjectName("checkabsent");
        checkabsent->setGeometry(QRect(10, 60, 76, 20));
        checkbrise = new QCheckBox(defComp);
        checkbrise->setObjectName("checkbrise");
        checkbrise->setGeometry(QRect(10, 80, 76, 20));
        defCI = new QGroupBox(addEntry);
        defCI->setObjectName("defCI");
        defCI->setGeometry(QRect(10, 170, 120, 91));
        checkpontseri = new QCheckBox(defCI);
        checkpontseri->setObjectName("checkpontseri");
        checkpontseri->setGeometry(QRect(10, 19, 81, 41));
        checkpontseri->setContextMenuPolicy(Qt::ActionsContextMenu);
        checkpontseri->setAcceptDrops(false);
        checkPiste = new QCheckBox(defCI);
        checkPiste->setObjectName("checkPiste");
        checkPiste->setGeometry(QRect(10, 60, 101, 20));
        defSoudure = new QGroupBox(addEntry);
        defSoudure->setObjectName("defSoudure");
        defSoudure->setGeometry(QRect(140, 50, 120, 111));
        checkabsente = new QCheckBox(defSoudure);
        checkabsente->setObjectName("checkabsente");
        checkabsente->setGeometry(QRect(10, 20, 76, 20));
        checkseche = new QCheckBox(defSoudure);
        checkseche->setObjectName("checkseche");
        checkseche->setGeometry(QRect(10, 40, 76, 20));
        checkmanhatan = new QCheckBox(defSoudure);
        checkmanhatan->setObjectName("checkmanhatan");
        checkmanhatan->setGeometry(QRect(10, 60, 76, 20));
        checkpont = new QCheckBox(defSoudure);
        checkpont->setObjectName("checkpont");
        checkpont->setGeometry(QRect(10, 80, 76, 20));
        defAutre = new QGroupBox(addEntry);
        defAutre->setObjectName("defAutre");
        defAutre->setGeometry(QRect(140, 170, 120, 81));
        checkautre = new QCheckBox(defAutre);
        checkautre->setObjectName("checkautre");
        checkautre->setGeometry(QRect(0, 0, 71, 20));
        checkautre->setLayoutDirection(Qt::RightToLeft);
        checkautre->setAutoFillBackground(false);
        textDefAutre = new QTextEdit(defAutre);
        textDefAutre->setObjectName("textDefAutre");
        textDefAutre->setGeometry(QRect(3, 20, 111, 51));
        lineArticle = new QLineEdit(addEntry);
        lineArticle->setObjectName("lineArticle");
        lineArticle->setGeometry(QRect(270, 100, 131, 22));
        label_3 = new QLabel(addEntry);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 80, 49, 16));
        label_3->setFont(font);
        label_4 = new QLabel(addEntry);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 140, 21, 16));
        label_4->setFont(font);
        lineOF = new QLineEdit(addEntry);
        lineOF->setObjectName("lineOF");
        lineOF->setGeometry(QRect(270, 160, 131, 22));
        label_8 = new QLabel(addEntry);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(478, 20, 21, 16));
        label_8->setFont(font);
        lineFIC = new QLineEdit(addEntry);
        lineFIC->setObjectName("lineFIC");
        lineFIC->setGeometry(QRect(428, 40, 131, 22));
        label_9 = new QLabel(addEntry);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(438, 60, 49, 21));
        QFont font3;
        font3.setPointSize(10);
        label_9->setFont(font3);
        lineIFIC = new QLineEdit(addEntry);
        lineIFIC->setObjectName("lineIFIC");
        lineIFIC->setGeometry(QRect(490, 60, 71, 22));
        label_10 = new QLabel(addEntry);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(430, 100, 49, 16));
        label_10->setFont(font);
        linePanne = new QLineEdit(addEntry);
        linePanne->setObjectName("linePanne");
        linePanne->setGeometry(QRect(480, 100, 81, 22));
        lineDesPanne = new QLineEdit(addEntry);
        lineDesPanne->setObjectName("lineDesPanne");
        lineDesPanne->setGeometry(QRect(430, 150, 131, 22));
        label_11 = new QLabel(addEntry);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(430, 130, 121, 16));
        label_11->setFont(font3);
        label_12 = new QLabel(addEntry);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(470, 180, 49, 16));
        label_12->setFont(font3);
        lineMesure = new QLineEdit(addEntry);
        lineMesure->setObjectName("lineMesure");
        lineMesure->setGeometry(QRect(430, 200, 131, 22));
        QFont font4;
        font4.setPointSize(9);
        lineMesure->setFont(font4);
        label_13 = new QLabel(addEntry);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(430, 220, 61, 21));
        label_13->setFont(font3);
        label_14 = new QLabel(addEntry);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(500, 220, 61, 21));
        label_14->setFont(font3);
        lineMin = new QLineEdit(addEntry);
        lineMin->setObjectName("lineMin");
        lineMin->setGeometry(QRect(430, 240, 61, 22));
        lineMax = new QLineEdit(addEntry);
        lineMax->setObjectName("lineMax");
        lineMax->setGeometry(QRect(502, 240, 61, 22));
        label_15 = new QLabel(addEntry);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(270, 270, 121, 21));
        label_15->setFont(font1);
        textIndicPanne = new QTextEdit(addEntry);
        textIndicPanne->setObjectName("textIndicPanne");
        textIndicPanne->setGeometry(QRect(250, 300, 151, 111));
        comboPoste = new QComboBox(addEntry);
        comboPoste->addItem(QString());
        comboPoste->addItem(QString());
        comboPoste->addItem(QString());
        comboPoste->addItem(QString());
        comboPoste->addItem(QString());
        comboPoste->addItem(QString());
        comboPoste->addItem(QString());
        comboPoste->addItem(QString());
        comboPoste->setObjectName("comboPoste");
        comboPoste->setGeometry(QRect(478, 280, 81, 22));
        label_16 = new QLabel(addEntry);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(420, 280, 49, 21));
        label_16->setFont(font);

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
        label_6->setText(QCoreApplication::translate("addEntry", "D\303\251faut", nullptr));
        defComp->setTitle(QCoreApplication::translate("addEntry", "Composant", nullptr));
        checkHS->setText(QCoreApplication::translate("addEntry", "H.S", nullptr));
        checkPolarite->setText(QCoreApplication::translate("addEntry", "Polarit\303\251", nullptr));
        checkabsent->setText(QCoreApplication::translate("addEntry", "Absent", nullptr));
        checkbrise->setText(QCoreApplication::translate("addEntry", "Bris\303\251", nullptr));
        defCI->setTitle(QCoreApplication::translate("addEntry", "Circuit Imprim\303\251", nullptr));
        checkpontseri->setText(QCoreApplication::translate("addEntry", "Pont de \n"
"Serigraphie", nullptr));
        checkPiste->setText(QCoreApplication::translate("addEntry", "Coupure Piste", nullptr));
        defSoudure->setTitle(QCoreApplication::translate("addEntry", "Soudure", nullptr));
        checkabsente->setText(QCoreApplication::translate("addEntry", "Absente", nullptr));
        checkseche->setText(QCoreApplication::translate("addEntry", "S\303\250che", nullptr));
        checkmanhatan->setText(QCoreApplication::translate("addEntry", "Manhatan", nullptr));
        checkpont->setText(QCoreApplication::translate("addEntry", "Pont", nullptr));
        defAutre->setTitle(QCoreApplication::translate("addEntry", "Autre", nullptr));
        checkautre->setText(QString());
        label_3->setText(QCoreApplication::translate("addEntry", "Article", nullptr));
        label_4->setText(QCoreApplication::translate("addEntry", "OF", nullptr));
        label_8->setText(QCoreApplication::translate("addEntry", "FIC", nullptr));
        label_9->setText(QCoreApplication::translate("addEntry", "Indice", nullptr));
        label_10->setText(QCoreApplication::translate("addEntry", "Panne", nullptr));
        label_11->setText(QCoreApplication::translate("addEntry", "Designation Panne", nullptr));
        label_12->setText(QCoreApplication::translate("addEntry", "Mesure", nullptr));
        label_13->setText(QCoreApplication::translate("addEntry", "Lim. Min", nullptr));
        label_14->setText(QCoreApplication::translate("addEntry", "Lim. Max", nullptr));
        label_15->setText(QCoreApplication::translate("addEntry", "Indication Panne", nullptr));
        comboPoste->setItemText(0, QCoreApplication::translate("addEntry", "VP1", nullptr));
        comboPoste->setItemText(1, QCoreApplication::translate("addEntry", "VP1N", nullptr));
        comboPoste->setItemText(2, QCoreApplication::translate("addEntry", "VP2", nullptr));
        comboPoste->setItemText(3, QCoreApplication::translate("addEntry", "VP2N", nullptr));
        comboPoste->setItemText(4, QCoreApplication::translate("addEntry", "VP3", nullptr));
        comboPoste->setItemText(5, QCoreApplication::translate("addEntry", "VP3N", nullptr));
        comboPoste->setItemText(6, QCoreApplication::translate("addEntry", "VP4", nullptr));
        comboPoste->setItemText(7, QCoreApplication::translate("addEntry", "Hors Poste", nullptr));

        label_16->setText(QCoreApplication::translate("addEntry", "Poste", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addEntry: public Ui_addEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDENTRY_H
