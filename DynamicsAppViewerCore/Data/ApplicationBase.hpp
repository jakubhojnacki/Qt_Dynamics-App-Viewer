#pragma once

#include <QString>
#include <QUuid>

#include "../Global.hpp"

#include "Version.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT ApplicationBase {
        protected:
            ApplicationBase();

        private:
            QUuid id { };
            QString name { "" };
            QString publisher { "" };
            Version version { };

        public:
            const QUuid& getId() const;
            const QString& getName() const;
            const QString& getPublisher() const;
            const Version& getVersion() const;

        public:
            void setId(const QUuid& pId);
            void setName(const QString& pName);
            void setPublisher(const QString& pPublisher);
            void setVersion(const Version& pVersion);
    };
} } } }
