#pragma once

#include "Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT IdRange {
        public:
            IdRange();

        private:
            int from { 0 };
            int to { 0 };

        public:
            int getFrom() const;
            int getTo() const;

        public:
            void setFrom(const int pFrom);
            void setTo(const int pTo);
    };
} } } }
