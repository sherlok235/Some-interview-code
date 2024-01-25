#ifndef CONTROLER_H
#define CONTROLER_H

#include "translator.h"
#include "mainwindow.h"

#include <QDebug>
#include <QSharedPointer>
#include <QString>

class Controler:QObject
{
    Q_OBJECT
    QSharedPointer<Translator> m_translator;
    QSharedPointer<MainWindow> m_window;
public:
    Controler(QSharedPointer<Translator>, QSharedPointer<MainWindow> );
private slots:
    void writeMorseCode(QString);
};

#endif // CONTROLER_H
