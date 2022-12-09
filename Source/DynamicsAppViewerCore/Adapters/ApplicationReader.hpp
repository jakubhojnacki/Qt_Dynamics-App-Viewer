#pragma once

#include <QObject>
#include <QString>
#include <QTextStream>

#include "../Data/Application.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Adapters {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT ApplicationReader : public QObject {
        Q_OBJECT

        public: ApplicationReader();

        public: Data::Application read(const QString& pFilePath);
        public: Data::Application read(const QDataStream& pStream);
    };
} } } }
