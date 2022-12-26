#pragma once

#include <QSharedData>
#include <QSharedDataPointer>
#include <QString>
#include <QUuid>

#include "Version.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class ManifestBase : public QSharedData {
        protected: ManifestBase();

        private: QUuid mId { };
        public: const QUuid& id() const;
        public: void id(const QUuid& pId);

        private: QString mName { "" };
        public: const QString& name() const;
        public: void name(const QString& pName);

        private: QString mPublisher { "" };
        public: const QString& publisher() const;
        public: void publisher(const QString& pPublisher);

        private: QSharedDataPointer<Version> mVersion { new Version { } };
        public: const QSharedDataPointer<Version> version() const;
        public: void version(const QSharedDataPointer<Version> pVersion);
    };
} } } }
