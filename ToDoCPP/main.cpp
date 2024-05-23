#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QFile>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);


    // QFile styleFile("resources/styles.qss");
    // styleFile.open(QFile::ReadOnly);
    // QString styleQSS = styleFile.readAll();

    // app.setStyleSheet(styleQSS);

    MainWindow window;

    window.show();
    return app.exec();
}
