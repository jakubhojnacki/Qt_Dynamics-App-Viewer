#pragma once

#include <QString>

#include "Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    template <typename EnumType>
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Enum {
        public: Enum();
        public: Enum(const EnumType pValue);
        public: Enum(const QString& pString);

        protected: virtual QString name() const = 0;
        protected: virtual QMap<EnumType, QString> values() const = 0;

        private: EnumType defaultValue() const;

        private: EnumType mValue { this->defaultValue() };
        public: EnumType value() const;
        public: void value(const EnumType pValue);

        public: QString toString() const;
        public: void parse(const QString& pString);
    };
} } } }
