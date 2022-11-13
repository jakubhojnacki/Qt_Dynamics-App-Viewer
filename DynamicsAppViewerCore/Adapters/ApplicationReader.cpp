#include "ApplicationReader.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Adapters {
    ApplicationReader::ApplicationReader() {
    }

    Data::Application ApplicationReader::read(const QString& pFilePath) {
        QString filePath = pFilePath;
        QTextStream textStream { &filePath, QIODevice::OpenModeFlag::ReadOnly };
        return this->read(textStream);
   }

    Data::Application ApplicationReader::read(const QTextStream& pTextStream) {
        Data::Application application { };
        //TODO >>> Not implemented
        return application;
    }
} } } }
