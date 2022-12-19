#include <QMap>

#include "Bool.hpp"
#include "Exception.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    Bool::Bool() {
    }

    QString Bool::toString(const bool pValue) {
        return pValue ? "True" : "False";
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
