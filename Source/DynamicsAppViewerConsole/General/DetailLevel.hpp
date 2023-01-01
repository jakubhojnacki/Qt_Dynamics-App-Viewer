#pragma once

#include <QObject>
#include <QString>

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    class DetailLevel : QObject {
        Q_OBJECT

        public: enum Type {
            Null = 0,
            Basic = 1,
            Medium = 2,
            Full = 3
        };

        Q_ENUM(Type)

        public: DetailLevel();
        public: DetailLevel(const DetailLevel::Type pValue);
        public: DetailLevel(const QString& pString);

        private: DetailLevel::Type mValue { DetailLevel::Type::Basic };
        public: DetailLevel::Type value() const;
        public: void setValue(const DetailLevel::Type pValue);

        public: const QString toString() const;
    };
} } } }
