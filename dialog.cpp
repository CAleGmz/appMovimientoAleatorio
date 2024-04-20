#include "dialog.h"
#include "ui_dialog.h"

#include <QRandomGenerator>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    timer1 = new QTimer();
    connect(timer1, SIGNAL(timeout()), this, SLOT(moverLava()));

    x = QRandomGenerator::global()->bounded(0,7);
    y = QRandomGenerator::global()->bounded(0,7);
    z = QRandomGenerator::global()->bounded(0,7);
    a = QRandomGenerator::global()->bounded(0,7);
    b = QRandomGenerator::global()->bounded(0,7);

    movie = new QMovie(":/Lava/lavaDos.gif");
    ui->lava->setMovie(movie);
    movie->start();

    movie = new QMovie(":/Lava/lavaUno.gif");
    ui->lava1->setMovie(movie);
    movie->start();

    movie = new QMovie(":/Lava/lavaDos.gif");
    ui->lava2->setMovie(movie);
    movie->start();

    movie = new QMovie(":/Lava/lavaTres.gif");
    ui->lava3->setMovie(movie);
    movie->start();

    movie = new QMovie(":/Lava/lavaUno.gif");
    ui->lava4->setMovie(movie);
    movie->start();

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::moverLava()
{
    switch (x){
    case 0:
        ui->lava1->move(ui->lava1->x()+1, ui->lava1->y());
        if(ui->lava1->x() + ui->lava1->width() == ui->widget->width())
            x = QRandomGenerator::global()->bounded(3,5);
        break;

    case 1:
        ui->lava1->move(ui->lava1->x()+1, ui->lava1->y()+1);
        if(ui->lava1->x() + ui->lava1->width() > ui->widget->width() || ui->lava1->y() + ui->lava1->height() > ui->widget->height())
            x = QRandomGenerator::global()->bounded(4,6);
        break;

    case 2:
        ui->lava1->move(ui->lava1->x(), ui->lava1->y()+1);
        if(ui->lava1->y() + ui->lava1->height() == ui->widget->height())
            x = QRandomGenerator::global()->bounded(6,8);
        break;

    case 3:
        ui->lava1->move(ui->lava1->x()-1, ui->lava1->y()+1);
        if(ui->lava1->x() == 0 || ui->lava1->y() + ui->lava1->height() == ui->widget->height())
            x = QRandomGenerator::global()->bounded(6,7);
        break;

    case 4:
        ui->lava1->move(ui->lava1->x()-1, ui->lava1->y());
        if(ui->lava1->x() == 0)
            x = QRandomGenerator::global()->bounded(0,1);
        break;

    case 5:
        ui->lava1->move(ui->lava1->x()-1, ui->lava1->y()-1);
        if(ui->lava1->x() == 0 || ui->lava1->y() == 0)
            x = QRandomGenerator::global()->bounded(0,3);
        break;

    case 6:
        ui->lava1->move(ui->lava1->x(), ui->lava1->y()-1);
        if(ui->lava1->y() == 0)
            x = QRandomGenerator::global()->bounded(1,3);
        break;

    case 7:
        ui->lava1->move(ui->lava1->x()+1, ui->lava1->y()-1);
        if(ui->lava1->x() + ui->lava1->width() == ui->widget->width() || ui->lava1->y()== 0)
            x = QRandomGenerator::global()->bounded(2,4);
        break;
    }

    switch (y){
    case 0:
        ui->lava2->move(ui->lava2->x()+1, ui->lava2->y());
        if(ui->lava2->x() + ui->lava2->width() == ui->widget->width())
            y = QRandomGenerator::global()->bounded(3,5);
        break;

    case 1:
        ui->lava2->move(ui->lava2->x()+1, ui->lava2->y()+1);
        if(ui->lava2->x() + ui->lava2->width() > ui->widget->width() || ui->lava2->y() + ui->lava2->height() > ui->widget->height())
            y = QRandomGenerator::global()->bounded(4,6);
        break;

    case 2:
        ui->lava2->move(ui->lava2->x(), ui->lava2->y()+1);
        if(ui->lava2->y() + ui->lava2->height() == ui->widget->height())
            y = QRandomGenerator::global()->bounded(6,8);
        break;

    case 3:
        ui->lava2->move(ui->lava2->x()-1, ui->lava2->y()+1);
        if(ui->lava2->x() == 0 || ui->lava2->y() + ui->lava2->height() == ui->widget->height())
            y = QRandomGenerator::global()->bounded(6,7);
        break;

    case 4:
        ui->lava2->move(ui->lava2->x()-1, ui->lava2->y());
        if(ui->lava2->x() == 0)
            y = QRandomGenerator::global()->bounded(0,1);
        break;

    case 5:
        ui->lava2->move(ui->lava2->x()-1, ui->lava2->y()-1);
        if(ui->lava2->x() == 0 || ui->lava2->y() == 0)
            y = QRandomGenerator::global()->bounded(0,3);
        break;

    case 6:
        ui->lava2->move(ui->lava2->x(), ui->lava2->y()-1);
        if(ui->lava2->y() == 0)
            y = QRandomGenerator::global()->bounded(1,3);
        break;

    case 7:
        ui->lava2->move(ui->lava2->x()+1, ui->lava2->y()-1);
        if(ui->lava2->x() + ui->lava2->width() == ui->widget->width() || ui->lava2->y()== 0)
            y = QRandomGenerator::global()->bounded(2,4);
        break;
    }

    switch (z){
    case 0:
        ui->lava3->move(ui->lava3->x()+1, ui->lava3->y());
        if(ui->lava3->x() + ui->lava3->width() == ui->widget->width())
            z = QRandomGenerator::global()->bounded(3,5);
        break;

    case 1:
        ui->lava3->move(ui->lava3->x()+1, ui->lava3->y()+1);
        if(ui->lava3->x() + ui->lava3->width() > ui->widget->width() || ui->lava3->y() + ui->lava3->height() > ui->widget->height())
            z = QRandomGenerator::global()->bounded(4,6);
        break;

    case 2:
        ui->lava3->move(ui->lava3->x(), ui->lava3->y()+1);
        if(ui->lava3->y() + ui->lava3->height() == ui->widget->height())
            z = QRandomGenerator::global()->bounded(6,8);
        break;

    case 3:
        ui->lava3->move(ui->lava3->x()-1, ui->lava3->y()+1);
        if(ui->lava3->x() == 0 || ui->lava3->y() + ui->lava3->height() == ui->widget->height())
            z = QRandomGenerator::global()->bounded(6,7);
        break;

    case 4:
        ui->lava3->move(ui->lava3->x()-1, ui->lava3->y());
        if(ui->lava3->x() == 0)
            z = QRandomGenerator::global()->bounded(0,1);
        break;

    case 5:
        ui->lava3->move(ui->lava3->x()-1, ui->lava3->y()-1);
        if(ui->lava3->x() == 0 || ui->lava3->y() == 0)
            z = QRandomGenerator::global()->bounded(0,3);
        break;

    case 6:
        ui->lava3->move(ui->lava3->x(), ui->lava3->y()-1);
        if(ui->lava3->y() == 0)
            z = QRandomGenerator::global()->bounded(1,3);
        break;

    case 7:
        ui->lava3->move(ui->lava3->x()+1, ui->lava3->y()-1);
        if(ui->lava3->x() + ui->lava3->width() == ui->widget->width() || ui->lava3->y()== 0)
            z = QRandomGenerator::global()->bounded(2,4);
        break;
    }

    switch (a){
    case 0:
        ui->lava->move(ui->lava->x()+1, ui->lava->y());
        if(ui->lava->x() + ui->lava->width() == ui->widget->width())
            a = QRandomGenerator::global()->bounded(3,5);
        break;

    case 1:
        ui->lava->move(ui->lava->x()+1, ui->lava->y()+1);
        if(ui->lava->x() + ui->lava->width() > ui->widget->width() || ui->lava->y() + ui->lava->height() > ui->widget->height())
            a = QRandomGenerator::global()->bounded(4,6);
        break;

    case 2:
        ui->lava->move(ui->lava->x(), ui->lava->y()+1);
        if(ui->lava->y() + ui->lava->height() == ui->widget->height())
            a = QRandomGenerator::global()->bounded(6,8);
        break;

    case 3:
        ui->lava->move(ui->lava->x()-1, ui->lava->y()+1);
        if(ui->lava->x() == 0 || ui->lava->y() + ui->lava->height() == ui->widget->height())
            a = QRandomGenerator::global()->bounded(6,7);
        break;

    case 4:
        ui->lava->move(ui->lava->x()-1, ui->lava->y());
        if(ui->lava->x() == 0)
            a = QRandomGenerator::global()->bounded(0,1);
        break;

    case 5:
        ui->lava->move(ui->lava->x()-1, ui->lava->y()-1);
        if(ui->lava->x() == 0 || ui->lava->y() == 0)
            a = QRandomGenerator::global()->bounded(0,3);
        break;

    case 6:
        ui->lava->move(ui->lava->x(), ui->lava->y()-1);
        if(ui->lava->y() == 0)
            a = QRandomGenerator::global()->bounded(1,3);
        break;

    case 7:
        ui->lava->move(ui->lava->x()+1, ui->lava->y()-1);
        if(ui->lava->x() + ui->lava->width() == ui->widget->width() || ui->lava->y()== 0)
            a = QRandomGenerator::global()->bounded(2,4);
        break;
    }

    switch (b){
    case 0:
        ui->lava4->move(ui->lava4->x()+1, ui->lava4->y());
        if(ui->lava4->x() + ui->lava4->width() == ui->widget->width())
            b = QRandomGenerator::global()->bounded(3,5);
        break;

    case 1:
        ui->lava4->move(ui->lava4->x()+1, ui->lava4->y()+1);
        if(ui->lava4->x() + ui->lava4->width() > ui->widget->width() || ui->lava4->y() + ui->lava4->height() > ui->widget->height())
            b = QRandomGenerator::global()->bounded(4,6);
        break;

    case 2:
        ui->lava4->move(ui->lava4->x(), ui->lava4->y()+1);
        if(ui->lava4->y() + ui->lava4->height() == ui->widget->height())
            b = QRandomGenerator::global()->bounded(6,8);
        break;

    case 3:
        ui->lava4->move(ui->lava4->x()-1, ui->lava4->y()+1);
        if(ui->lava4->x() == 0 || ui->lava4->y() + ui->lava4->height() == ui->widget->height())
            b = QRandomGenerator::global()->bounded(6,7);
        break;

    case 4:
        ui->lava4->move(ui->lava4->x()-1, ui->lava4->y());
        if(ui->lava4->x() == 0)
            b = QRandomGenerator::global()->bounded(0,1);
        break;

    case 5:
        ui->lava4->move(ui->lava4->x()-1, ui->lava4->y()-1);
        if(ui->lava4->x() == 0 || ui->lava4->y() == 0)
            b = QRandomGenerator::global()->bounded(0,3);
        break;

    case 6:
        ui->lava4->move(ui->lava4->x(), ui->lava4->y()-1);
        if(ui->lava4->y() == 0)
            b = QRandomGenerator::global()->bounded(1,3);
        break;

    case 7:
        ui->lava4->move(ui->lava4->x()+1, ui->lava4->y()-1);
        if(ui->lava4->x() + ui->lava4->width() == ui->widget->width() || ui->lava4->y()== 0)
            b = QRandomGenerator::global()->bounded(2,4);
        break;
    }
}

void Dialog::on_pushButton_clicked()
{
    timer1->start(ui->dialVelocidad->value());
}


void Dialog::on_pushButton_2_clicked()
{
    timer1->stop();
}


void Dialog::on_pushButton_3_clicked()
{
    close();
}




void Dialog::on_dialVelocidad_valueChanged(int value)
{
    timer1->start(value);
}

