#pragma once

#include <QString>
#include <QUuid>
#include "../Global.hpp"
#include "../Generic/Version.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT ManifestBase {
        protected: ManifestBase();

        private: QUuid id { };
        public: const QUuid& getId() const;
        public: void setId(const QUuid& pId);

        private: QString name { "" };
        public: const QString& getName() const;
        public: void setName(const QString& pName);

        private: QString publisher { "" };
        public: const QString& getPublisher() const;
        public: void setPublisher(const QString& pPublisher);

        private: Generic::Version version { };
        public: const Generic::Version& getVersion() const;
        public: void setVersion(const Generic::Version& pVersion);
    };
} } } }