#include "ApplicationInformation.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    ApplicationInformation::ApplicationInformation() {
    }

    const QString& ApplicationInformation::getName() const {
        return this->name;
    }

    const QString& ApplicationInformation::getDescription() const {
        return this->description;
    }

    const QVersionNumber& ApplicationInformation::getVersion() const {
        return this->version;
    }

    const QString& ApplicationInformation::getCompany() const {
        return this->company;
    }

    const QString& ApplicationInformation::getAuthor() const {
        return this->author;
    }

    const QString& ApplicationInformation::getDate() const {
        return this->date;
    }
} } } }
