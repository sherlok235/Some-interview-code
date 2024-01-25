#include "translator.h"
#include <QDebug>

QString Translator::textToMorse(const QString &text)
{
    QString Morse;

    for(QChar c : text) {
        c = c.toUpper();

        if (c == " ")
            continue;

        if(m_morse.find(c) != m_morse.end()) {
            Morse += m_morse.value(c) + " ";
        }
    }
    return Morse;
}
