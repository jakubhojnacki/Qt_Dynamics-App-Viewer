#include <QMap>

#include "Enum.hpp"
#include "Exception.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    template <typename EnumType>
    Enum<EnumType>::Enum() { }

    template <typename EnumType>
    Enum<EnumType>::Enum(const EnumType pValue) : mValue { pValue } { }

    template <typename EnumType>
    Enum<EnumType>::Enum(const QString& pString) { this->parse(pString); }

    template <typename EnumType>
    EnumType Enum<EnumType>::defaultValue() const {
        EnumType defaultValue { };
        QMap<EnumType, QString> values = this->values();
        if (values.count() > 0)
            defaultValue = values.firstKey();
        else
            throw Exception { QString { "No values have been defined for %1." }.arg(this->name()) };
        return defaultValue;
    }

    template <typename EnumType>
    EnumType Enum<EnumType>::value() const { return this->mValue; }
    template <typename EnumType>
    void Enum<EnumType>::value(const EnumType pValue) { this->mValue = pValue; }

    template <typename EnumType>
    QString Enum<EnumType>::toString() const {
        QString string { };
        QMap<EnumType, QString> values = this->values();
        if (values.contains(this->value()))
            string = values[this->value()];
        return string;
    }

    template <typename EnumType>
    void Enum<EnumType>::parse(const QString& pString) {
        bool valueFound { false };
        QString stringToFind = pString.trimmed().toLower();
        QMap<EnumType, QString> values = this->values();
        QList<QString> strings = values.values();
        for (int index = 0; index  < strings.size(); ++index)
            if (strings.at(index).trimmed().toLower() == stringToFind) {
                this->value(values.keys()[index]);
                valueFound = true;
                break;
            }
        if (!valueFound)
            throw Exception { QString { "Cannot parse '%1' to %2" }.arg(pString, this->name()) };
    }
} } } }
