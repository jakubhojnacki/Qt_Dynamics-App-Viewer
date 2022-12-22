#pragma once

#include <QString>
#include <QUuid>

#include "Version.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class ManifestBase {
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

        private: Version mVersion { };
        public: const Version& version() const;
        public: void version(const Version& pVersion);
    };
} } } }
