#pragma once

#include <QString>
#include <QVersionNumber>

#include "Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace General {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT ApplicationInformation {
        public: ApplicationInformation();

        private: QString mName { "Dynamics App Viewer" };
        public: const QString& name() const;

        private: QString mDescription { "Viewer for Dynamics 365 Business Central application files" };
        public: const QString& description() const;

        private: QVersionNumber mVersion { 0, 0, 1 };
        public: const QVersionNumber& version() const;

        private: QString mCompany { "Fortah" };
        public: const QString& company() const;

        private: QString mAuthor { "Jakub Hojnacki <jakubhojnacki@gmail.com>" };
        public: const QString& author() const;

        private: QString mDate { "December 2022" };
        public: const QString& date() const;
    };
} } } }

