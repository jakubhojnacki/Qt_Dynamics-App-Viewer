#pragma once

#include "../DynamicsAppViewerCore/General/ApplicationInformation.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace Formatters {
    class ApplicationInformationFormatter {
        public: static QString toString(const Core::General::ApplicationInformation& pApplicationInformation);
    };
} } } }

