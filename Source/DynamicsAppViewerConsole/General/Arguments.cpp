#include "General/Arguments.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    Arguments::Arguments() { }

    const QString& Arguments::path() const { return this->mPath; }
    void Arguments::path(const QString& pPath) { this->mPath = pPath; }

    QSharedDataPointer<DetailLevel> Arguments::detailLevel() const { return this->mDetailLevel; }
    void Arguments::detailLevel(const QSharedDataPointer<DetailLevel> pDetailLevel) { this->mDetailLevel = pDetailLevel; }

    bool Arguments::showObjects() const { return this->mShowObjects; }
    void Arguments::showObjects(const bool pShowObjects) { this->mShowObjects = pShowObjects; }
} } } }
