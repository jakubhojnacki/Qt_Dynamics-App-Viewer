#include "Version.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
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

    QString Version::format() const {
        QString text { };
        //TODO >>> Not implemented
        return text;
    }

    Version Version::parse(QString& pText) {
        Version version { };
        //TODO >>> Not implemented
        return version;
    }
} } } }
