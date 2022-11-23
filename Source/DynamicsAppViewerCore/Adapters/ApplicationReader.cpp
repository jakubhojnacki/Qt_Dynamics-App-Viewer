#include <QDataStream>
#include <QException>
#include <QFile>
#include "ApplicationReader.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Adapters {
    ApplicationReader::ApplicationReader() {
    }

    Data::Application ApplicationReader::read(const QString& pFilePath) {
        Data::Application application { };
        QFile file { pFilePath };
        if (file.open(QIODevice::ReadOnly)) {
            QDataStream stream { &file };
            application = this->read(stream);
            file.close();
        } else
            throw; //TODO >> What should be here?
        return application;
    }

    Data::Application ApplicationReader::read(const QDataStream& pStream) {
        Data::Application application { };
        QByteArray compressedData { };
        //TODO >>> Not implemented
        return application;
    }
} } } }
