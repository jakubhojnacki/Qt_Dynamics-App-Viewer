#include <QMap>

#include "Enum.hpp"
#include "Exception.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    template <typename EnumType>
    Enum<EnumType>::Enum() {
    }

    template <typename EnumType>
    Enum<EnumType>::Enum(const EnumType pValue) :
        value { pValue } {
    }

    template <typename EnumType>
    EnumType Enum<EnumType>::getValue() const { return this->value; }
    template <typename EnumType>
    void Enum<EnumType>::setValue(const EnumType pValue) { this->value = pValue; }

    template <typename EnumType>
    QString Enum<EnumType>::toString() const {
        QString string { };
        QMap<EnumType, QString> values = this->getValues();
        if (values.contains(this->value))
            string = values[this->value];
        return string;
    }

    template <typename EnumType>
    EnumType Enum<EnumType>::parse(const QString& pString) {
        EnumType value { };
        bool valueFound { false };
        QString stringToFind = pString.trimmed().toLower();
        QMap<EnumType, QString> values = this->getValues();
        QList<QString> strings = values.values();
        for (int index = 0; index  < strings.size(); ++index)
            if (strings.at(index).trimmed().toLower() == stringToFind) {
                value = values.keys[index];
                valueFound = true;
                break;
            }
        if (!valueFound)
            throw Exception { QString { "Cannot parse '%1' to %2" }.arg(pString, this->getName()) };
        return value;
    }
} } } }
