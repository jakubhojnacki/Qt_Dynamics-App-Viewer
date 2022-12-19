#pragma once

#include <QString>

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class Version {
        public: Version();
        public: Version(int pMajor, int pMinor);
        public: Version(int pMajor, int pMinor, int pBuild);
        public: Version(int pMajor, int pMinor, int pBuild, int pRevision);

        private: int major { 0 };
        public: int getMajor() const;

        private: int minor { 0 };
        public: int getMinor() const;

        private: int build { 0 };
        public: int getBuild() const;

        private: int revision { 0 };
        public: int getRevision() const;

        public: static Version empty();
        public: bool isEmpty() const;
        public: QString format() const;
        public: static Version parse(QString& pText);
    };
} } } }
