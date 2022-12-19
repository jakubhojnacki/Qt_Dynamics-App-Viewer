#pragma once

#include <QString>

#include "Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Bool {
        private: Bool();

        public: static QString toString(const bool pValue);
        public: static bool parse(const QString& pString);
    };
} } } }
