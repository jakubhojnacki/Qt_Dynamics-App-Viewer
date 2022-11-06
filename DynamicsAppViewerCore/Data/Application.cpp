#include "Application.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    Application::Application() : ApplicationBase() {
    }

    const QString& Application::getBrief() const { return this->brief; }
    const QString& Application::getDescription() const { return this->description; }
    const QString& Application::getPrivacyStatement() const { return this->privacyStatement; }
    const QString& Application::getEula() const { return this->eula; }
    const QString& Application::getHelp() const { return this->help; }
    const QString& Application::getUrl() const { return this->url; }
    const QString& Application::getLogo() const { return this->logo; }
    const Version& Application::getApplication() const { return this->application; }
    const Version& Application::getPlatform() const { return this->platform; }
    const QString& Application::getContextSensitiveHelpUrl() const { return this->contextSensitiveHelpUrl; }
    bool Application::getShowMyCode() const { return this->showMyCode; }
    const Runtime& Application::getRuntime() const { return this->runtime; }
    const QList<Dependency>& Application::getDependencies() const { return this->dependencies; }
    const QList<QString>& Application::getScreenshots() const { return this->screenshots; }

    void Application::setBrief(const QString& pBrief) { this->brief = pBrief; }
    void Application::setDescription(const QString& pDescription) { this->description = pDescription; }
    void Application::setPrivacyStatement(const QString& pPrivacyStatement) { this->privacyStatement = pPrivacyStatement; }
    void Application::setEula(const QString& pEula) { this->eula = pEula; }
    void Application::setHelp(const QString& pHelp) { this->help = pHelp; }
    void Application::setUrl(const QString& pUrl) { this->url = pUrl; }
    void Application::setLogo(const QString& pLogo) { this->logo = pLogo; }
    void Application::setApplication(const Version& pApplication) { this->application = pApplication; }
    void Application::setPlatform(const Version& pPlatform) { this->platform = pPlatform; }
    void Application::setContextSensitiveHelpUrl(const QString& pContextSensitiveHelpUrl) { this->contextSensitiveHelpUrl = pContextSensitiveHelpUrl; }
    void Application::setShowMyCode(const bool pShowMyCode) { this->showMyCode = pShowMyCode; }
    void Application::setRuntime(const Runtime& pRuntime) { this->runtime = pRuntime; }
} } } }
