#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QDebug>
#include <QTimer>

QTimer *timer;
bool isClockRunning = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateClock); // QTImer is connected with UpdateClock
}

MainWindow::~MainWindow()
{
    delete ui;
}


// Taking data from c file ...
void MainWindow::GetTime(bool showDate)
{
    QProcess process;
    process.start("D:/Qt/UpdateTime/Ccode/GetTime.exe"); // executing c program executable


    if (!process.waitForFinished()) {
        qDebug() << "Error: Process did not finish!";
        return;
    }

    // Read the output from GetTime.exe
    QString output = process.readAllStandardOutput();
    QStringList lines = output.split("\n", Qt::SkipEmptyParts);

    // Checking if output contains valid lines before setting the label
    // c program prints first line Date and second line Time
    if (!lines.isEmpty()) {
        QString result;
        if (showDate) {
            result = lines.first();
        } else {
            result = lines.last();
        }
        ui->Time_label->setText(result);
    }
}

// Fetching Time on clicking button
void MainWindow::on_getTime_pushButton_clicked()
{
    GetTime(false);
}

//Fetching Date on clicking
void MainWindow::on_Date_pushButton_clicked()
{
    GetTime(true);
}

// Function to Update Time Every Second
void MainWindow::updateClock()
{
    GetTime(false);
}

void MainWindow::on_clock_button_clicked()
{
    isClockRunning = !isClockRunning;
    if (isClockRunning) {
        timer->start(1000);    //QTimer acts as a loop by calling updateClock() every second.
        ui->clock_button->setText("Stop Clock");
    } else {
        timer->stop();    //QTimer stops the event
        ui->clock_button->setText("Start Clock");
    }
}

