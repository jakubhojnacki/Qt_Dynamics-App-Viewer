#pragma once

#include <QObject>
#include <QString>
#include <QVersionNumber>

#include "Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT ApplicationInformation : public QObject {
        Q_OBJECT

        public: ApplicationInformation();

        private: QString name { "Dynamics App Viewer" };
        public: const QString& getName() const;

        private: QString description { "Viewer for Dynamics 365 Business Central application files" };
        public: const QString& getDescription() const;

        private: QVersionNumber version { 0, 0, 1 };
        public: const QVersionNumber& getVersion() const;

        private: QString company { "Fortah" };
        public: const QString& getCompany() const;

        private: QString author { "Jakub Hojnacki <jakubhojnacki@gmail.com>" };
        public: const QString& getAuthor() const;

        private: QString date { "November 2022" };
        public: const QString& getDate() const;
    };
} } } }

