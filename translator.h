#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <QString>
#include <QMap>

class Translator
{
    const QMap<QChar, QString> m_morse = {
        {'A', ".-"  }, {'B', "-..."}, {'C', "-.-."}, {'D', "-.." }, {'E', "."   },
        {'F', "..-."}, {'G', "--." }, {'H', "...."}, {'I', ".."  }, {'J', ".---"},
        {'K', "-.-" }, {'L', ".-.."}, {'M', "--"  }, {'N', "-."  }, {'O', "---" },
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-." }, {'S', "..." }, {'T', "-"   },
        {'U', "..-" }, {'V', "...-"}, {'W', ".--" }, {'X', "-..-"}, {'Y', "-.--"},
        {'Z', "--.."}};
public:
    QString textToMorse(const QString& text);    
};

#endif // TRANSLATOR_H
