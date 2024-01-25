#include "mainwindow.h"
#include "translator.h"
#include "controler.h"

#include <QApplication>
#include <QSharedPointer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSharedPointer<MainWindow> window = QSharedPointer<MainWindow>(new MainWindow);
    QSharedPointer<Translator> translator = QSharedPointer<Translator>(new Translator);
    Controler c {translator,window};

    window->show();

    return a.exec();
}
