#pragma once

#include <QObject>
#include <QString>
#include <QTextStream>

#include "../Data/Application.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Adapters {
    class ApplicationReader : public QObject {
        Q_OBJECT

        public: ApplicationReader();

        public: QSharedDataPointer<Data::Application> read(const QString& pFilePath);
        public: QSharedDataPointer<Data::Application> read(const QDataStream& pStream);
    };
} } } }
