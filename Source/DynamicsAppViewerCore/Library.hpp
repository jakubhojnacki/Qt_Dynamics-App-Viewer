#pragma once

#include <QObject>

#include "Global.hpp"
#include "General/ApplicationInformation.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Library : public QObject {
        Q_OBJECT

        public: Library();

        public: static General::ApplicationInformation applicationInformation();
    };
} } }
