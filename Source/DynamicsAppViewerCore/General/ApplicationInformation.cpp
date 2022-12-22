#include "ApplicationInformation.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    ApplicationInformation::ApplicationInformation() {
    }

    const QString& ApplicationInformation::name() const { return this->mName; }

    const QString& ApplicationInformation::description() const { return this->mDescription; }

    const QVersionNumber& ApplicationInformation::version() const { return this->mVersion; }

    const QString& ApplicationInformation::company() const { return this->mCompany; }

    const QString& ApplicationInformation::author() const { return this->mAuthor; }

    const QString& ApplicationInformation::date() const { return this->mDate; }
} } } }
