#include <QMap>
#include "DetailLevel.hpp"
#include "../DynamicsAppViewerCore/General/Exception.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    DetailLevel::DetailLevel()
        : Enum { } {
    }

    DetailLevel::DetailLevel(const DetailLevelEnum pValue)
        : Enum { pValue } {
    }

    QMap<DetailLevelEnum, QString> DetailLevel::getValues() const {
        return {
            { DetailLevelEnum::Null, "Null" },
            { DetailLevelEnum::Basic, "Basic" },
            { DetailLevelEnum::Medium, "Medium" },
            { DetailLevelEnum::Full, "Full" }
        };
    }

    void DetailLevel::setValue(const DetailLevel::Enum pValue) {
        this->value = pValue;
    }

    QString DetailLevel::toString() const {
        switch (this->value) {
            case DetailLevel::Enum::Basic: return "Basic"; break;
            case DetailLevel::Enum::Medium: return "Medium"; break;
            case DetailLevel::Enum::Full: return "Full"; break;
            default: return ""; break;
        }
    }

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
            throw Core::General::Exception { QString { "Cannot parse '%1' to DetailLevel" }.arg(pString) };
        return DetailLevel { result };
    }
} } } }
