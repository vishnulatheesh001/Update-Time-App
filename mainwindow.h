#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_getTime_pushButton_clicked();

    void on_Date_pushButton_clicked();

    void on_clock_button_clicked();

    void updateClock();

    void GetTime(bool showDate);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
