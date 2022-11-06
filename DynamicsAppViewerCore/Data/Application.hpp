#pragma once

#include <QList>
#include <QString>
#include <QUuid>

#include "Global.hpp"

#include "ApplicationBase.hpp"
#include "Runtime.hpp"
#include "Dependency.hpp"
#include "IdRange.hpp"
#include "Version.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Application : public ApplicationBase {
        public:
            Application();

        private:
            QString brief { "" };
            QString description { "" };
            QString privacyStatement { "" };
            QString eula { "" };
            QString help { "" };
            QString url { "" };
            QString logo { "" };
            Version platform { };
            Version application { };
            QString contextSensitiveHelpUrl { "" };
            bool showMyCode { false };
            Runtime runtime { };
            QList<Dependency> dependencies { };
            QList<IdRange> idRanges { };
            QList<QString> screenshots { };

        public:
            const QString& getBrief() const;
            const QString& getDescription() const;
            const QString& getPrivacyStatement() const;
            const QString& getEula() const;
            const QString& getHelp() const;
            const QString& getUrl() const;
            const QString& getLogo() const;
            const Version& getApplication() const;
            const QString& getContextSensitiveHelpUrl() const;
            const Version& getPlatform() const;
            bool getShowMyCode() const;
            const Runtime& getRuntime() const;
            const QList<Dependency>& getDependencies() const;
            const QList<QString>& getScreenshots() const;

        public:
            void setBrief(const QString& pBrief);
            void setDescription(const QString& pDescription);
            void setPrivacyStatement(const QString& pPrivacyStatement);
            void setEula(const QString& pEula);
            void setHelp(const QString& pHelp);
            void setUrl(const QString& pUrl);
            void setLogo(const QString& pLogo);
            void setPlatform(const Version& pPlatform);
            void setApplication(const Version& pApplication);
            void setContextSensitiveHelpUrl(const QString& pContextSensitiveHelpUrl);
            void setShowMyCode(const bool pShowMyCode);
            void setRuntime(const Runtime& pRuntime);
    };
} } } }
