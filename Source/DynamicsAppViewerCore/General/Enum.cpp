#include <QMetaEnum>

#include "Enum.hpp"
#include "Exception.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    Enum::Enum() { }

    template<typename EnumType> QString Enum::toString(const EnumType pValue) {
        return QMetaEnum::fromType<EnumType>().valueToKey(pValue);
    }

    template<typename EnumType> EnumType Enum::parse(const QString& pString) {
        EnumType value { };
        bool ok { false };
        int intValue { QMetaEnum::fromType<EnumType>().keyToValue(pString.toLatin1().constData(), &ok) };
        if (ok)
            value = static_cast<EnumType>(intValue);
        else
            throw Exception { QString("String '%1' cannot be converted to %2").arg(pString, QMetaEnum::fromType<EnumType>().name()) };
        return value;
    }
} } } }
