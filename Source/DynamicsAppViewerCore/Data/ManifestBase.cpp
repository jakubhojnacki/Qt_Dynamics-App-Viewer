#include "ManifestBase.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    ManifestBase::ManifestBase() { }

    const QUuid& ManifestBase::id() const { return this->mId; }
    void ManifestBase::id(const QUuid& pId) { this->mId = pId; }

    const QString& ManifestBase::name() const { return this->mName; }
    void ManifestBase::name(const QString& pName) { this->mName = pName; }

    const QString& ManifestBase::publisher() const { return this->mPublisher; }
    void ManifestBase::publisher(const QString& pPublisher) { this->mPublisher = pPublisher; }

    const Version& ManifestBase::version() const { return this->mVersion; }
    void ManifestBase::version(const Version& pVersion) { this->mVersion = pVersion; }
} } } }

