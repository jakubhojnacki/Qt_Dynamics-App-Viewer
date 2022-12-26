#include "Manifest.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    Manifest::Manifest() : ManifestBase() { }

    const QString& Manifest::brief() const { return this->mBrief; }
    void Manifest::brief(const QString& pBrief) { this->mBrief = pBrief; }

    const QString& Manifest::description() const { return this->mDescription; }
    void Manifest::description(const QString& pDescription) { this->mDescription = pDescription; }

    const QString& Manifest::privacyStatement() const { return this->mPrivacyStatement; }
    void Manifest::privacyStatement(const QString& pPrivacyStatement) { this->mPrivacyStatement = pPrivacyStatement; }

    const QString& Manifest::eula() const { return this->mEula; }
    void Manifest::eula(const QString& pEula) { this->mEula = pEula; }

    const QString& Manifest::help() const { return this->mHelp; }
    void Manifest::help(const QString& pHelp) { this->mHelp = pHelp; }

    const QString& Manifest::url() const { return this->mUrl; }
    void Manifest::url(const QString& pUrl) { this->mUrl = pUrl; }

    const QString& Manifest::logo() const { return this->mLogo; }
    void Manifest::logo(const QString& pLogo) { this->mLogo = pLogo; }

    const QSharedDataPointer<Version> Manifest::application() const { return this->mApplication; }
    void Manifest::application(const QSharedDataPointer<Version> pApplication) { this->mApplication = pApplication; }

    const QSharedDataPointer<Version> Manifest::platform() const { return this->mPlatform; }
    void Manifest::platform(const QSharedDataPointer<Version> pPlatform) { this->mPlatform = pPlatform; }

    const QString& Manifest::contextSensitiveHelpUrl() const { return this->mContextSensitiveHelpUrl; }
    void Manifest::contextSensitiveHelpUrl(const QString& pContextSensitiveHelpUrl) { this->mContextSensitiveHelpUrl = pContextSensitiveHelpUrl; }

    bool Manifest::showMyCode() const { return this->mShowMyCode; }
    void Manifest::showMyCode(const bool pShowMyCode) { this->mShowMyCode = pShowMyCode; }

    const QSharedDataPointer<Runtime> Manifest::runtime() const { return this->mRuntime; }
    void Manifest::runtime(const QSharedDataPointer<Runtime> pRuntime) { this->mRuntime = pRuntime; }

    const QList<Dependency>& Manifest::dependencies() const { return this->mDependencies; }

    const QList<QString>& Manifest::screenshots() const { return this->mScreenshots; }
} } } }
