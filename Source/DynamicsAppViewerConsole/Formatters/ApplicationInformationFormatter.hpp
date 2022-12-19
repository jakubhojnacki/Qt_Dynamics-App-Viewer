#pragma once

#include <QObject>

#include "../DynamicsAppViewerCore/General/ApplicationInformation.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace Formatters {
    class ApplicationInformationFormatter {
        private: ApplicationInformationFormatter();

        public: static QString toString(const Core::General::ApplicationInformation& pApplicationInformation);
    };
} } } }

