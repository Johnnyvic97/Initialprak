#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene(60,50,300,235);
    scene->setSceneRect(20,40,300,235);
    ui->graphicsView->setScene(scene);

    ui->comboBox->addItem("OR");
     ui->comboBox->addItem("INPUT");
      ui->comboBox->addItem("OUTPUT");
}

MainWindow::~MainWindow()
{
    //delete nodes;
    delete orbox;
    delete ui;
    delete in1;
     delete in2;
     delete out;
}

void MainWindow::on_insert_clicked()
{
    index = ui->comboBox->currentIndex();
    switch (index){
    case 0:
       orbox =new MySquare();
        in1 = new Input1();
        in2 =new Input2;
        out= new Output;

        scene->addItem(orbox);
        scene->addItem(in1);
        scene->addItem(in2);
        scene->addItem(out);




        qDebug("OR");
        break;
    case 1:
        qDebug("input");
        break;
    case 2:
        qDebug("output");
        break;
}}
