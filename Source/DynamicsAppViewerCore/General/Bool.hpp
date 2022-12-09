#pragma once

#include <QObject>
#include <QString>

#include "Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Bool : public QObject {
        Q_OBJECT

        private: Bool();

        public: static bool parse(const QString& pString);
    };
} } } }
