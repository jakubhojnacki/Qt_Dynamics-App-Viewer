#include <QMetaEnum>
#include <QString>

#include "DetailLevel.hpp"
#include "../DynamicsAppViewerCore/General/Enum.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    DetailLevel::DetailLevel() { }

    DetailLevel::DetailLevel(const DetailLevel::Type pValue) : mValue { pValue } { }

    DetailLevel::DetailLevel(const QString& pString) {
        this->setValue(Core::General::Enum::parse<DetailLevel::Type>(pString));
    }

    DetailLevel::Type DetailLevel::value() const { return this->mValue; }
    void DetailLevel::setValue(const DetailLevel::Type pValue) { this->mValue = pValue; }

    const QString DetailLevel::toString() const {
        return Core::General::Enum::toString<DetailLevel::Type>(this->value());
    }
} } } }
