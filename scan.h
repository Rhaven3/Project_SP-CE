#ifndef SCAN_H
#define SCAN_H

#include <QDialog>

namespace Ui {
class Scan;
}

class Scan : public QDialog
{
    Q_OBJECT

public:
    explicit Scan(QWidget *parent = nullptr);
    ~Scan();

private:
    Ui::Scan *ui;
};

#endif // SCAN_H
