#include "General/Arguments.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    Arguments::Arguments() {
    }

    const QString& Arguments::getPath() const { return this->path; }
    void Arguments::setPath(const QString& pPath) { this->path = pPath; }

    DetailLevel Arguments::getDetailLevel() const { return this->detailLevel; }
    void Arguments::setDetailLevel(const DetailLevel pDetailLevel) { this->detailLevel = pDetailLevel; }

    bool Arguments::getShowObjects() const { return this->showObjects; }
    void Arguments::setShowObjects(const bool pShowObjects) { this->showObjects = pShowObjects; }
} } } }
