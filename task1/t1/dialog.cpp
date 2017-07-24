#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include <QPainter>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Draw_clicked()
{
    qDebug() << "Clicked";
    drawShapes = !drawShapes;
    update();
}

void Dialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    if (drawShapes)
    {
        painter.setRenderHint(QPainter::Antialiasing,true);
        QPen pen(Qt::blue,2);
        painter.setPen(pen);
        QRect r=QRect(0,0,100,100);
        painter.drawEllipse(r);
    }

}
