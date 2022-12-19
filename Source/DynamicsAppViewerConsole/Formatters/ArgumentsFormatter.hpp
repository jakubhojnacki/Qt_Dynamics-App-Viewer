#pragma once

#include "../General/Arguments.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace Formatters {
    class ArgumentsFormatter {
        private: ArgumentsFormatter();

        public: static QString toString(const General::Arguments& pArguments);
    };
} } } }
