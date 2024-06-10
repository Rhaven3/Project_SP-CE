#ifndef LOGCHOICE_H
#define LOGCHOICE_H

#include <QDialog>

namespace Ui {
class LogChoice;
}

class LogChoice : public QDialog
{
    Q_OBJECT

public:
    std::string filePath;

    explicit LogChoice(QWidget *parent = nullptr);
    ~LogChoice();

public slots:
    void on_buttonBox_accepted();

private slots:
    void on_NoDepanned_clicked();
    void on_Depanned_clicked();
    void on_Search_textChanged(const QString &arg1);

private:
    Ui::LogChoice *ui;
};

#endif // LOGCHOICE_H
