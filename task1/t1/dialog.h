#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void paintEvent(QPaintEvent *event);


private slots:
    void on_Draw_clicked();

private:
    Ui::Dialog *ui;
    bool drawShapes = false;
};

#endif // DIALOG_H
