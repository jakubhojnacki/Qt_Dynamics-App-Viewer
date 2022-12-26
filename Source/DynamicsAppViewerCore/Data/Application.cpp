#include "Application.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    Application::Application() {
    }

    const QString& Application::filePath() const { return this->mFilePath; }
    void Application::filePath(const QString& pFilePath) { this->mFilePath = pFilePath; }

    const QSharedDataPointer<Data::Manifest> Application::manifest() const { return this->mManifest; }
    void Application::manifest(const QSharedDataPointer<Data::Manifest> pManifest) { this->mManifest = pManifest; }
} } } }
