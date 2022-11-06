#include "Version.hpp"

namespace DynamicsAppViewerCore {
    Version::Version() {
    }

    Version::Version(int pMajor, int pMinor) : Version() {
        this->major = pMajor;
        this->minor = pMinor;
    }

    Version::Version(int pMajor, int pMinor, int pBuild) : Version(pMajor, pMinor) {
        this->build = pBuild;
    }

    Version::Version(int pMajor, int pMinor, int pBuild, int pRevision) : Version(pMajor , pMinor, pBuild) {
        this->revision = pRevision;
    }

    int Version::getMajor() const { return this->major; }
    int Version::getMinor() const { return this->minor; }
    int Version::getBuild() const { return this->build; }
    int Version::getRevision() const { return this->revision; }
}
