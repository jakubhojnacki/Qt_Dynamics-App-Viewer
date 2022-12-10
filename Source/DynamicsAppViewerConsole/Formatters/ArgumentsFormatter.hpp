#pragma once

#include <QObject>
#include <QString>

#include "../General/Arguments.hpp"

namespace Fortah {
    namespace DynamicsAppViewer {
        namespace Console {
            namespace Formatters {
                class ArgumentsFormatter : public QObject {
                    Q_OBJECT

                    private: ArgumentsFormatter();

                    public: static QString toString(const General::Arguments& pArguments);
                };
            }
        }
    }
}
