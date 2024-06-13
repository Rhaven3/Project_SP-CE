#ifndef EDIT_H
#define EDIT_H

#include <fstream>
#include <QDialog>
#include <unordered_set>
#include "mongeelkan.h"
#include "mainwindow.h"
#include "log.h"

class MainWindow;

namespace Ui {
class Edit;
}

class Edit : public QDialog
{
    Q_OBJECT

public:
    explicit Edit(MainWindow *parent = nullptr);
    ~Edit();

private slots:
    void on_buttonBox_accepted();
    void on_comboOF_currentTextChanged(const QString &arg1);
    void on_comboDate_currentTextChanged(const QString &arg1);

private:
    Ui::Edit *ui;
    MainWindow *mainWindow;
    vector<string> OFs;
    vector<ContentLog> Logs;
    vector<string> extractOF();
    vector<ContentLog> extractDate();

};

#endif // EDIT_H
