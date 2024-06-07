#include "logchoice.h"
#include "ui_logchoice.h"

LogChoice::LogChoice(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LogChoice)
{
    ui->setupUi(this);
}

LogChoice::~LogChoice()
{
    delete ui;
}

void LogChoice::on_NoDepanned_clicked()
{
    QStringList L1 = {"19018FW", "18581FW", "18554FW"};
    ui->comboSearch->clear();
    ui->comboSearch->addItems(L1);
}


void LogChoice::on_Depanned_clicked()
{
    QStringList L1 = {"X18019", "X18581", "X45518"};
    ui->comboSearch->clear();
    ui->comboSearch->addItems(L1);
}


void LogChoice::on_Search_editingFinished()
{
    // Store the name in a member variable, eg a map between names and login names
    namesMap.insert(name, loginName);

    QString currentString = ebt->text();
    if (currentString.isEmpty())
    {
        QComboBox::keyPressEvent(evt);
        return;
    }

    // Iterate through the map and search for the given name
    QMapIterator<QString, QString> it(namesMap);
    while(it.hasNext())
    {
        it.next();
        QString name = it.key();
        if (name.contains(currentString))
        {
            // it.value() is the login name corresponding to the name
            // we have to find its index in the combo box in order to select it
            int itemIndex = findText(it.value());
            if (itemIndex >= 0)
                setCurrentIndex(itemIndex);
            return;
        }
}

