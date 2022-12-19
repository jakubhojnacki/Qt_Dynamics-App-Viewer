#pragma once

#include <QString>

#include "Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Exception {
        public: Exception(const QString& pMessage);

        private: QString message { };
        public: const QString& getMessage() const;

        public: const QString& toString() const;
    };
} } } }
