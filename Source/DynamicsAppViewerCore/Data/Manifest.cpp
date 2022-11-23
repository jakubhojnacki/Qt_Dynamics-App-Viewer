#include "Manifest.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    Manifest::Manifest() : ManifestBase() {
    }

    const QString& Manifest::getBrief() const { return this->brief; }
    void Manifest::setBrief(const QString& pBrief) { this->brief = pBrief; }

    const QString& Manifest::getDescription() const { return this->description; }
    void Manifest::setDescription(const QString& pDescription) { this->description = pDescription; }

    const QString& Manifest::getPrivacyStatement() const { return this->privacyStatement; }
    void Manifest::setPrivacyStatement(const QString& pPrivacyStatement) { this->privacyStatement = pPrivacyStatement; }

    const QString& Manifest::getEula() const { return this->eula; }
    void Manifest::setEula(const QString& pEula) { this->eula = pEula; }

    const QString& Manifest::getHelp() const { return this->help; }
    void Manifest::setHelp(const QString& pHelp) { this->help = pHelp; }

    const QString& Manifest::getUrl() const { return this->url; }
    void Manifest::setUrl(const QString& pUrl) { this->url = pUrl; }

    const QString& Manifest::getLogo() const { return this->logo; }
    void Manifest::setLogo(const QString& pLogo) { this->logo = pLogo; }

    const Version& Manifest::getApplication() const { return this->application; }
    void Manifest::setApplication(const Version& pApplication) { this->application = pApplication; }

    const Version& Manifest::getPlatform() const { return this->platform; }
    void Manifest::setPlatform(const Version& pPlatform) { this->platform = pPlatform; }

    const QString& Manifest::getContextSensitiveHelpUrl() const { return this->contextSensitiveHelpUrl; }
    void Manifest::setContextSensitiveHelpUrl(const QString& pContextSensitiveHelpUrl) { this->contextSensitiveHelpUrl = pContextSensitiveHelpUrl; }

    bool Manifest::getShowMyCode() const { return this->showMyCode; }
    void Manifest::setShowMyCode(const bool pShowMyCode) { this->showMyCode = pShowMyCode; }

    const Runtime& Manifest::getRuntime() const { return this->runtime; }
    void Manifest::setRuntime(const Runtime& pRuntime) { this->runtime = pRuntime; }

    const QList<Dependency>& Manifest::getDependencies() const { return this->dependencies; }

    const QList<QString>& Manifest::getScreenshots() const { return this->screenshots; }
} } } }
