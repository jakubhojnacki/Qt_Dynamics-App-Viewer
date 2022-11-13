#pragma once

#include "Global.hpp"
#include "General/ApplicationInformation.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Library {
        public: Library();

        public: static General::ApplicationInformation getApplicationInformation();
    };
} } }
