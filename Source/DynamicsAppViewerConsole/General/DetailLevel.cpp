#include <QMap>
#include "DetailLevel.hpp"
#include "../DynamicsAppViewerCore/General/Exception.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    DetailLevel::DetailLevel() {
    }

    DetailLevel::DetailLevel(const DetailLevel::Enum pValue) : value(pValue) {
    }

    DetailLevel::Enum DetailLevel::getValue() const { return this->value; }
    void DetailLevel::setValue(const DetailLevel::Enum pValue) { this->value = pValue; }

    DetailLevel DetailLevel::parse(const QString& pString) {
        DetailLevel::Enum result { DetailLevel::Enum::Null };

        const QString stringToParse { pString.toLower().trimmed() };

        QMap<QString, DetailLevel::Enum> values { };
        values["basic"] = DetailLevel::Enum::Basic;
        values["medium"] = DetailLevel::Enum::Medium;
        values["full"] = DetailLevel::Enum::Full;

        if (values.contains(stringToParse))
            result = values[stringToParse];
        else
            throw Core::General::Exception { QString("Cannot parse '%1' to DetailLevel").arg(pString) };

        return DetailLevel(result);
    }
} } } }
