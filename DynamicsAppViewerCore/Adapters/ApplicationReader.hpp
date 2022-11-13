#pragma once

#include <QString>
#include <QTextStream>
#include "../Data/Application.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Adapters {
    class ApplicationReader {
        public: ApplicationReader();

        public: Data::Application read(const QString& pFilePath);
        public: Data::Application read(const QDataStream& pStream);
    };
} } } }
