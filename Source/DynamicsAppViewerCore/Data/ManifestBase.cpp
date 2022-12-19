#include "ManifestBase.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    ManifestBase::ManifestBase() {
    }

    const QUuid& ManifestBase::getId() const { return this->id; }
    void ManifestBase::setId(const QUuid& pId) { this->id = pId; }

    const QString& ManifestBase::getName() const { return this->name; }
    void ManifestBase::setName(const QString& pName) { this->name = pName; }

    const QString& ManifestBase::getPublisher() const { return this->publisher; }
    void ManifestBase::setPublisher(const QString& pPublisher) { this->publisher = pPublisher; }

    const Version& ManifestBase::getVersion() const { return this->version; }
    void ManifestBase::setVersion(const Version& pVersion) { this->version = pVersion; }
} } } }

