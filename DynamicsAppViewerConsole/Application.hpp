#pragma once

#include <QCoreApplication>
#include <QObject>
#include <QTextStream>
#include "General/Arguments.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console {
    class Application : public QObject {
        Q_OBJECT

        public: Application(QObject* pParent = 0);

        private: General::Arguments arguments { };
        private: QTextStream out { stdout };

        private: QCoreApplication* getQtApplication();

        public slots: void run();
        signals: void finished();

        private: void initialise();
        private: void readArguments();
        private: void finalise();
    };
} } }
