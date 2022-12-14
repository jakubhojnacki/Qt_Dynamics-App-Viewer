#pragma once

#include <QSharedData>
#include <QSharedDataPointer>
#include <QString>

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class Version : public QSharedData {
        public: Version();
        public: Version(int pMajor, int pMinor);
        public: Version(int pMajor, int pMinor, int pBuild);
        public: Version(int pMajor, int pMinor, int pBuild, int pRevision);

        private: int mMajor { 0 };
        public: int major() const;

        private: int mMinor { 0 };
        public: int minor() const;

        private: int mBuild { 0 };
        public: int build() const;

        private: int mRevision { 0 };
        public: int revision() const;

        public: bool isEmpty() const;
        public: QString format() const;
        public: static QSharedDataPointer<Version> parse(QString& pText);
    };
} } } }
