#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QFile>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QFile file(":/resources/styles.qss");
    if (file.open(QFile::ReadOnly)) {
        QString styleSheet = QLatin1String(file.readAll());
        app.setStyleSheet(styleSheet);
    } else {
        qWarning("Could not open stylesheet file");
    }
    MainWindow window;

    window.show();
    return app.exec();
}
