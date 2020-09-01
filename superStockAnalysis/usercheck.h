#ifndef USERCHECK_H
#define USERCHECK_H

#include <QWidget>
#include <QLineEdit>

namespace Ui {
class UserCheck;
}

class UserCheck : public QWidget
{
    Q_OBJECT

public:
    explicit UserCheck(QWidget *parent = nullptr);
    ~UserCheck();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::UserCheck *ui;
};

#endif // USERCHECK_H
