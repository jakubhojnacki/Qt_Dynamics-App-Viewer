#include "ApplicationInformationFormatter.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace Formatters {
    ApplicationInformationFormatter::ApplicationInformationFormatter() { }

    QString ApplicationInformationFormatter::toString(const Core::General::ApplicationInformation& pApplicationInformation) {
        return QString { "%1 %2 - %3 - %4 - %5" }.arg(pApplicationInformation.name(), pApplicationInformation.version().toString(),
            pApplicationInformation.description(), pApplicationInformation.author(), pApplicationInformation.date()); }
} } } }
