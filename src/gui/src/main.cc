#include "mainwindow.h"
#include "tablewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Колганов Д. 3821Б1ПМоп1");
    w.show();
    return a.exec();
}
