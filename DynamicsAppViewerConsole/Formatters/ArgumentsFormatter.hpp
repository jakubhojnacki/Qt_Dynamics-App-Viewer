#pragma once

#include <QString>
#include "../General/Arguments.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace Formatters {
    class ArgumentsFormatter {
        public: static QString toString(const General::Arguments& pArguments);
    };
} } } }
