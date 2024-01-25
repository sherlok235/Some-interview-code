#include "controler.h"

Controler::Controler(QSharedPointer<Translator> translator, QSharedPointer<MainWindow> mainWindow)
{
    m_translator = QSharedPointer<Translator>(translator);
    m_window = QSharedPointer<MainWindow>(mainWindow);

    QObject::connect(m_window.data(),SIGNAL(PrepareData(QString)),this, SLOT(writeMorseCode(QString)));
}

void Controler::writeMorseCode(QString text)
{
    m_window->SetOutputText(m_translator->textToMorse(text));
}
