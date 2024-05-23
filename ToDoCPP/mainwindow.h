#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QListWidget *mondayList;
    QListWidget *tuesdayList;
    QListWidget *wednesdayList;
    QListWidget *thursdayList;
    QListWidget *fridayList;
    QListWidget *saturdayList;
    QListWidget *sundayList;
};
#endif // MAINWINDOW_H
