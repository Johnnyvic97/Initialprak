#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mysquare.h"
#include <QPainter>
#include <QGraphicsScene>
#include <QPainter>
#include <QPixmap>
#include <QLineEdit>
#include <QMainWindow>
#include "input1.h"
#include "input2.h"
#include "output.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_insert_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    MySquare *orbox;
    Input1 *in1;
    Input2 *in2;
    Output *out;
    int index;

};

#endif // MAINWINDOW_H
