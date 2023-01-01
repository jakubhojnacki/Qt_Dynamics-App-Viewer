#pragma once

#include <QString>

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    class Enum {
        private: Enum();

        public: template<typename EnumType> static QString toString(const EnumType pValue);
        public: template<typename EnumType> static EnumType parse(const QString& pString);
    };
} } } }
