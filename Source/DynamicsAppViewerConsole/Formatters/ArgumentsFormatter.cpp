#include "../General/Arguments.hpp"
#include "ArgumentsFormatter.hpp"

namespace Fortah {
    namespace DynamicsAppViewer {
        namespace Console {
            namespace Formatters {
                ArgumentsFormatter::ArgumentsFormatter() {
                }

                QString ArgumentsFormatter::toString(const General::Arguments& pArguments) {
                    return
                        QString("Path: '%1'").arg(pArguments.getPath()) + "\r\n" +
                        QString("Detail Level: '%1'").arg(pArguments.getDetailLevel().toString()) + "\r\n" +
                        QString("Show Objects: '%1'").arg(pArguments.getShowObjects());
                }
            }
        }
    }
}
