#include "../General/Arguments.hpp"
#include "ArgumentsFormatter.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace Formatters {
    QString ArgumentsFormatter::toString(const General::Arguments& pArguments) {
        return QString("Path: \"%1\"").arg(pArguments.getPath());
    }
} } } }
