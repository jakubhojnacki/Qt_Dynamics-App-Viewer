#pragma once

#include <QString>

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class Runtime {
        public: Runtime();
        public: Runtime(int pMajor);
        public: Runtime(int pMajor, int pMinor);

        private: int major { 0 };
        public: int getMajor() const;

        private: int minor { 0 };
        public: int getMinor() const;

        public: static Runtime empty();
        public: bool isEmpty() const;
        public: QString format() const;
        public: static Runtime parse(QString& pText);
    };
} } } }
