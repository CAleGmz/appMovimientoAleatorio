#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QMovie>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void moverLava();

    void on_dialVelocidad_valueChanged(int value);

private:
    Ui::Dialog *ui;

    QTimer *timer1;

    int x,y,z,a,b;

    QMovie *movie;

};
#endif // DIALOG_H
