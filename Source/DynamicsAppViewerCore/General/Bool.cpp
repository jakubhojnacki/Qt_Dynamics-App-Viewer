#include <QMap>
#include "Exception.hpp"
#include "Bool.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    Bool::Bool() {
    }

    bool Bool::parse(const QString& pString) {
        bool result { false };

        const QString stringToParse { pString.toLower().trimmed() };

        QMap<QString, bool> values { };
        values["false"] = false;
        values["true"] = true;

        if (values.contains(stringToParse))
            result = values[stringToParse];
        else
            throw Exception { QString("Cannot parse '%1' to boolean").arg(pString) };

        return result;
    }
} } } }
