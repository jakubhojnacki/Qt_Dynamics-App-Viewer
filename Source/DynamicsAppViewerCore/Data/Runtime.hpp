#pragma once

#include <QObject>
#include <QString>

#include "../Global.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Core { namespace Data {
    class DYNAMICS_APP_VIEWER_CORE_EXPORT Runtime : public QObject {
        Q_OBJECT

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
