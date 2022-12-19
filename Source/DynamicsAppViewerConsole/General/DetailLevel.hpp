#pragma once

#include <QString>

#include "../DynamicsAppViewerCore/General/Enum.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    enum class DetailLevelEnum {
        Null = 0,
        Basic = 1,
        Medium = 2,
        Full = 3
    };

    class DetailLevel : public Core::General::Enum<DetailLevelEnum> {
        public: DetailLevel();
        public: DetailLevel(const DetailLevelEnum pValue);

        QMap<DetailLevelEnum, QString> getValues() const;

        public: static DetailLevel parse(const QString& pString);
    };
} } } }
