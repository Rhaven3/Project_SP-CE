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
    explicit LogChoice(QWidget *parent = nullptr);
    ~LogChoice();

private:
    Ui::LogChoice *ui;
};

#endif // LOGCHOICE_H
