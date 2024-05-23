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
    mondayButton = new QPushButton("Add Task", this);
    tuesdayButton = new QPushButton("Add Task", this);
    wednesdayButton = new QPushButton("Add Task", this);
    thursdayButton = new QPushButton("Add Task", this);
    fridayButton = new QPushButton("Add Task", this);
    saturdayButton = new QPushButton("Add Task", this);

    layout->addWidget(new QLabel("Monday"), 0, 0);
    layout->addWidget(mondayButton, 0, 1);
    layout->addWidget(mondayList, 1, 0, 1, 2);

    layout->addWidget(new QLabel("Tuesday"), 0, 2);
    layout->addWidget(tuesdayButton, 0, 3);
    layout->addWidget(tuesdayList, 1, 2, 1, 2);

    layout->addWidget(new QLabel("Wednesday"), 0, 4);
    layout->addWidget(wednesdayButton, 0, 5);
    layout->addWidget(wednesdayList, 1, 4, 1, 2);

    layout->addWidget(new QLabel("Thursday"), 0, 6);
    layout->addWidget(thursdayButton, 0, 7);
    layout->addWidget(thursdayList, 1, 6, 1, 2);

    layout->addWidget(new QLabel("Friday"), 0, 8);
    layout->addWidget(fridayButton, 0, 9);
    layout->addWidget(fridayList, 1, 8, 1, 2);

    layout->addWidget(new QLabel("Saturday"), 0, 10);
    layout->addWidget(saturdayButton, 0, 11);
    layout->addWidget(saturdayList, 1, 10, 1, 2);

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
