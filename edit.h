#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include "mongeelkan.h"

namespace Ui {
class Edit;
}

class Edit : public QDialog
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();

private slots:
    void on_buttonBox_accepted();
    void on_comboOF_currentTextChanged(const QString &arg1);
    void on_comboDate_currentTextChanged(const QString &arg1);

private:
    Ui::Edit *ui;
};

#endif // EDIT_H
