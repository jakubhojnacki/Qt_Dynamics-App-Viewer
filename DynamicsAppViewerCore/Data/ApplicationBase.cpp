#include "ApplicationBase.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    ApplicationBase::ApplicationBase() {
    }

    const QUuid& ApplicationBase::getId() const { return this->id; }
    const QString& ApplicationBase::getName() const { return this->name; }
    const QString& ApplicationBase::getPublisher() const { return this->publisher; }
    const Version& ApplicationBase::getVersion() const { return this->version; }

    void ApplicationBase::setId(const QUuid& pId) { this->id = pId; }
    void ApplicationBase::setName(const QString& pName) { this->name = pName; }
    void ApplicationBase::setPublisher(const QString& pPublisher) { this->publisher = pPublisher; }
    void ApplicationBase::setVersion(const Version& pVersion) { this->version = pVersion; }
} } } }
