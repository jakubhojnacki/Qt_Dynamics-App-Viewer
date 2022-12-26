#pragma once

#include <QSharedData>
#include <QSharedDataPointer>
#include <QString>

#include "../Data/Manifest.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class Application : public QSharedData {
        public: Application();

        private: QString mFilePath { };
        public: const QString& filePath() const;
        public: void filePath(const QString& pFilePath);

        private: QSharedDataPointer<Data::Manifest> mManifest { new Data::Manifest { } };
        public: const QSharedDataPointer<Data::Manifest> manifest() const;
        public: void manifest(const QSharedDataPointer<Data::Manifest> pManifest);
    };
} } } }
