#pragma once

#include <QString>

#include "../Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Version {
        public:
            Version();
            Version(int pMajor, int pMinor);
            Version(int pMajor, int pMinor, int pBuild);
            Version(int pMajor, int pMinor, int pBuild, int pRevision);

        private:
            int major { 0 };
            int minor { 0 };
            int build { 0 };
            int revision { 0 };

        public:
            int getMajor() const;
            int getMinor() const;
            int getBuild() const;
            int getRevision() const;

        public:
            static Version empty();
            bool isEmpty() const;
            QString format() const;
            static Version parse(QString& pText);
    };
} } } }
