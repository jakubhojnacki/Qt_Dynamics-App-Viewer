#include "Version.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    Version::Version() {
    }

    Version::Version(int pMajor, int pMinor) : Version() {
        this->mMajor = pMajor;
        this->mMinor = pMinor;
    }

    Version::Version(int pMajor, int pMinor, int pBuild) : Version(pMajor, pMinor) {
        this->mBuild = pBuild;
    }

    Version::Version(int pMajor, int pMinor, int pBuild, int pRevision) : Version(pMajor , pMinor, pBuild) {
        this->mRevision = pRevision;
    }

    int Version::major() const { return this->mMajor; }

    int Version::minor() const { return this->mMinor; }

    int Version::build() const { return this->mBuild; }

    int Version::revision() const { return this->mRevision; }

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
