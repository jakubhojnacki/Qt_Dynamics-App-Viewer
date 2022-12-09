#pragma once

#include <QString>

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    class DetailLevel {
        public: enum Enum {
            Null = 0,
            Basic = 1,
            Medium = 2,
            Full = 3
        };

        public: DetailLevel();
        public: DetailLevel(const DetailLevel::Enum pValue);

        private: DetailLevel::Enum value { DetailLevel::Enum::Basic };
        public: DetailLevel::Enum getValue() const;
        public: void setValue(const DetailLevel::Enum pValue);

        public: static DetailLevel parse(const QString& pString);
    };
} } } }
