#pragma once

#include <QString>

#include "../Data/Manifest.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class Application {
        public: Application();

        private: QString mFilePath { };
        public: const QString& filePath() const;
        public: void filePath(const QString& pFilePath);

        private: Data::Manifest mManifest { };
        public: const Data::Manifest& manifest() const;
        public: void manifest(const Data::Manifest& pManifest);
    };
} } } }
