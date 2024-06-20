#ifndef ADDENTRY_H
#define ADDENTRY_H

#include <QDialog>

namespace Ui {
class addEntry;
}

class addEntry : public QDialog
{
    Q_OBJECT

public:
    explicit addEntry(QWidget *parent = nullptr);
    ~addEntry();

private slots:
    void on_comboCarte_currentTextChanged(const QString &arg1);
    void on_buttonBox_accepted();
    void on_comboState_currentTextChanged(const QString &arg1);
    void on_comboComp_currentTextChanged(const QString &arg1);

private:
    Ui::addEntry *ui;
};

#endif // ADDENTRY_H
