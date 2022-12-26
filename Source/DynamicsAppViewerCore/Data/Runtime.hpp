#pragma once

#include <QSharedData>
#include <QSharedDataPointer>
#include <QString>

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class Runtime : public QSharedData {
        public: Runtime();
        public: Runtime(int pMajor);
        public: Runtime(int pMajor, int pMinor);

        private: int mMajor { 0 };
        public: int major() const;

        private: int mMinor { 0 };
        public: int minor() const;

        public: static Runtime empty();
        public: bool isEmpty() const;
        public: QString format() const;
        public: static QSharedDataPointer<Runtime> parse(QString& pText);
    };
} } } }
