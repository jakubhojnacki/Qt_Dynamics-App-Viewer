#pragma once

#include <QString>

#include "../Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Runtime {
        public:
            Runtime();
            Runtime(int pMajor);
            Runtime(int pMajor, int pMinor);

        private:
            int major { 0 };
            int minor { 0 };

        public:
            int getMajor() const;
            int getMinor() const;

        public:
            static Runtime empty();
            bool isEmpty() const;
            QString format() const;
            static Runtime parse(QString& pText);
    };
} } } }
