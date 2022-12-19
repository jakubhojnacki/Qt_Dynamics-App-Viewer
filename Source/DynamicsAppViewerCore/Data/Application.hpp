#pragma once

#include <QString>

#include "../Data/Manifest.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class Application {
        public: Application();

        private: QString filePath { };
        public: const QString& getFilePath() const;
        public: void setFilePath(const QString& pFilePath);

        private: Data::Manifest manifest { };
        public: const Data::Manifest& getManifest() const;
        public: void setManifest(const Data::Manifest& pManifest);
    };
} } } }
