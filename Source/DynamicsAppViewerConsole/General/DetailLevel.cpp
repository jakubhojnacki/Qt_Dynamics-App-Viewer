#include <QMap>

#include "DetailLevel.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    DetailLevel::DetailLevel()
        : Enum { } {
    }

    DetailLevel::DetailLevel(const DetailLevelEnum pValue)
        : Enum { pValue } {
    }

    DetailLevel::DetailLevel(const QString& pString)
        : Enum { pString } {
    }

    QString DetailLevel::getName() const {
        return "DetailLevel";
    }

    QMap<DetailLevelEnum, QString> DetailLevel::getValues() const {
        return {
            { DetailLevelEnum::Null, "Null" },
            { DetailLevelEnum::Basic, "Basic" },
            { DetailLevelEnum::Medium, "Medium" },
            { DetailLevelEnum::Full, "Full" }
        };
    }
} } } }
