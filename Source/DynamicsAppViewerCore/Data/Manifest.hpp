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

        private: QString mBrief { "" };
        public: const QString& brief() const;
        public: void brief(const QString& pBrief);

        private: QString mDescription { "" };
        public: const QString& description() const;
        public: void description(const QString& pDescription);

        private: QString mPrivacyStatement { "" };
        public: const QString& privacyStatement() const;
        public: void privacyStatement(const QString& pPrivacyStatement);

        private: QString mEula { "" };
        public: const QString& eula() const;
        public: void eula(const QString& pEula);

        private: QString mHelp { "" };
        public: const QString& help() const;
        public: void help(const QString& pHelp);

        private: QString mUrl { "" };
        public: const QString& url() const;
        public: void url(const QString& pUrl);

        private: QString mLogo { "" };
        public: const QString& logo() const;
        public: void logo(const QString& pLogo);

        private: Version mPlatform { };
        public: const Version& platform() const;
        public: void platform(const Version& pPlatform);

        private: Version mApplication { };
        public: const Version& application() const;
        public: void application(const Version& pApplication);

        private: QString mContextSensitiveHelpUrl { "" };
        public: const QString& contextSensitiveHelpUrl() const;
        public: void contextSensitiveHelpUrl(const QString& pContextSensitiveHelpUrl);

        private: bool mShowMyCode { false };
        public: bool showMyCode() const;
        public: void showMyCode(const bool pShowMyCode);

        private: Runtime mRuntime { };
        public: const Runtime& runtime() const;
        public: void runtime(const Runtime& pRuntime);

        private: QList<Dependency> mDependencies { };
        public: const QList<Dependency>& dependencies() const;

        private: QList<IdRange> mDdRanges { };
        public: const QList<IdRange>& idRanges() const;

        private: QList<QString> mScreenshots { };
        public: const QList<QString>& screenshots() const;
    };
} } } }
