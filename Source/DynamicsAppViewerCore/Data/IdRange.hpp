#pragma once

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class IdRange {
        public: IdRange();

        private: int from { 0 };
        public: int getFrom() const;
        public: void setFrom(const int pFrom);

        private: int to { 0 };
        public: int getTo() const;
        public: void setTo(const int pTo);
    };
} } } }
