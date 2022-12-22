#include "Application.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    Application::Application() {
    }

    const QString& Application::filePath() const { return this->mFilePath; }
    void Application::filePath(const QString& pFilePath) { this->mFilePath = pFilePath; }

    const Data::Manifest& Application::manifest() const { return this->mManifest; }
    void Application::manifest(const Data::Manifest& pManifest) { this->mManifest = pManifest; }
} } } }
