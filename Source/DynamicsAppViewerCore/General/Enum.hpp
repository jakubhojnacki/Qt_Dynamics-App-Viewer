#pragma once

#include <QString>

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    template <typename EnumType>
    class Enum {
        public: Enum();
        public: Enum(const EnumType pValue);
        public: Enum(const QString& pString);

        protected: virtual QString getName() const = 0;
        protected: virtual QMap<EnumType, QString> getValues() const = 0;

        private: EnumType getDefaultValue() const;

        private: EnumType value { this->getDefaultValue() };
        public: EnumType getValue() const;
        public: void setValue(const EnumType pValue);

        public: QString toString() const;
    };
} } } }
