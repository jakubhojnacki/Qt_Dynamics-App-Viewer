#pragma once

#include <QList>
#include <QString>
#include <QUuid>

#include "Dependency.hpp"
#include "IdRange.hpp"
#include "ManifestBase.hpp"
#include "Runtime.hpp"
#include "Version.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class Manifest : public ManifestBase {
        public: Manifest();

        private: QString brief { "" };
        public: const QString& getBrief() const;
        public: void setBrief(const QString& pBrief);

        private: QString description { "" };
        public: const QString& getDescription() const;
        public: void setDescription(const QString& pDescription);

        private: QString privacyStatement { "" };
        public: const QString& getPrivacyStatement() const;
        public: void setPrivacyStatement(const QString& pPrivacyStatement);

        private: QString eula { "" };
        public: const QString& getEula() const;
        public: void setEula(const QString& pEula);

        private: QString help { "" };
        public: const QString& getHelp() const;
        public: void setHelp(const QString& pHelp);

        private: QString url { "" };
        public: const QString& getUrl() const;
        public: void setUrl(const QString& pUrl);

        private: QString logo { "" };
        public: const QString& getLogo() const;
        public: void setLogo(const QString& pLogo);

        private: Version platform { };
        public: const Version& getPlatform() const;
        public: void setPlatform(const Version& pPlatform);

        private: Version application { };
        public: const Version& getApplication() const;
        public: void setApplication(const Version& pApplication);

        private: QString contextSensitiveHelpUrl { "" };
        public: const QString& getContextSensitiveHelpUrl() const;
        public: void setContextSensitiveHelpUrl(const QString& pContextSensitiveHelpUrl);

        private: bool showMyCode { false };
        public: bool getShowMyCode() const;
        public: void setShowMyCode(const bool pShowMyCode);

        private: Runtime runtime { };
        public: const Runtime& getRuntime() const;
        public: void setRuntime(const Runtime& pRuntime);

        private: QList<Dependency> dependencies { };
        public: const QList<Dependency>& getDependencies() const;

        private: QList<IdRange> idRanges { };
        public: const QList<IdRange>& getIdRanges() const;

        private: QList<QString> screenshots { };
        public: const QList<QString>& getScreenshots() const;
    };
} } } }
