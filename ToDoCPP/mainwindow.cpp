#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QGridLayout>
#include <QListWidget>
#include <QLabel>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    QWidget *centralWidget = new QWidget(this);
    QGridLayout *layout = new QGridLayout(centralWidget);

    mondayList = new QListWidget(this);
    tuesdayList = new QListWidget(this);
    wednesdayList = new QListWidget(this);
    thursdayList = new QListWidget(this);
    fridayList = new QListWidget(this);
    saturdayList = new QListWidget(this);
    sundayList = new QListWidget(this);

    layout->addWidget(new QLabel("Monday"), 0, 0);
    layout->addWidget(mondayList, 1, 0);

    layout->addWidget(new QLabel("Tuesday"), 0, 1);
    layout->addWidget(tuesdayList, 1, 1);

    layout->addWidget(new QLabel("Wednesday"), 0, 2);
    layout->addWidget(wednesdayList, 1, 2);

    layout->addWidget(new QLabel("Thursday"), 0, 3);
    layout->addWidget(thursdayList, 1, 3);

    layout->addWidget(new QLabel("Friday"), 0, 4);
    layout->addWidget(fridayList, 1, 4);

    layout->addWidget(new QLabel("Saturday"), 0, 5);
    layout->addWidget(saturdayList, 1, 5);

    layout->addWidget(new QLabel("Sunday"), 0, 6);
    layout->addWidget(sundayList, 1, 6);

    setCentralWidget(centralWidget);

    // Populate with some example tasks
    mondayList->addItem("Task 1");
    mondayList->addItem("Task 2");

    tuesdayList->addItem("Task 1");
    tuesdayList->addItem("Task 2");
}

MainWindow::~MainWindow() {
    delete ui;
}
