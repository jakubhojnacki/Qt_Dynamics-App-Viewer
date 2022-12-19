#pragma once

#include <QString>

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    template <typename EnumType>
    class Enum {
        protected: Enum();
        protected: Enum(const EnumType pValue);

        protected: virtual QString getName() const;
        protected: virtual QMap<EnumType, QString> getValues() const = 0;
        protected: virtual EnumType getDefaultValue() const = 0;

        private: EnumType value { this->getDefaultValue() };
        public: EnumType getValue() const;
        public: void setValue(const EnumType pValue);

        public: QString toString() const;
        protected: EnumType parse(const QString& pString);
    };
} } } }
