#include "ApplicationInformationFormatter.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace Formatters {
    QString ApplicationInformationFormatter::toString(const Core::General::ApplicationInformation& pApplicationInformation) {
        return QString("%1 %2 - %3 - %4 - %5").arg(pApplicationInformation.getName(), pApplicationInformation.getVersion().toString(),
            pApplicationInformation.getDescription(), pApplicationInformation.getAuthor(), pApplicationInformation.getDate());
    }
} } } }
