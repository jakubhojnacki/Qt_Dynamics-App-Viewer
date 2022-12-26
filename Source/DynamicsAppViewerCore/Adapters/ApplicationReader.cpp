#include <QDataStream>
#include <QException>
#include <QFile>
#include "ApplicationReader.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Adapters {
    ApplicationReader::ApplicationReader() {
    }

    QSharedDataPointer<Data::Application> ApplicationReader::read(const QString& pFilePath) {
        QSharedDataPointer<Data::Application> application { };
        QFile file { pFilePath };
        if (file.open(QIODevice::ReadOnly)) {
            QDataStream stream { &file };
            application = this->read(stream);
            file.close();
        } else
            throw; //TODO >> What should be here?
        return application;
    }

    QSharedDataPointer<Data::Application> ApplicationReader::read(const QDataStream& pStream) {
        QSharedDataPointer<Data::Application> application { };
        QByteArray compressedData { };
        //TODO >>> Not implemented
        return application;
    }
} } } }
