#pragma once

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class IdRange {
        public: IdRange();

        private: int mFrom { 0 };
        public: int from() const;
        public: void from(const int pFrom);

        private: int mTo { 0 };
        public: int to() const;
        public: void to(const int pTo);
    };
} } } }
