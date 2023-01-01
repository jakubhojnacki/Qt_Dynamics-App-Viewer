#pragma once

#include <QCoreApplication>
#include <QObject>
#include <QTextStream>

#include "../DynamicsAppViewerCore/Library.hpp"
#include "../DynamicsAppViewerCore/General/ApplicationInformation.hpp"
#include "General/Arguments.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console {
    class Application : public QObject {
        Q_OBJECT

        public: Application(QObject* pParent = 0);

        private: Core::Library library { };
        private: Core::General::ApplicationInformation applicationInformation { this->library.applicationInformation() };
        private: General::Arguments arguments { };
        private: QTextStream out { stdout };

        private: QCoreApplication* qtApplication() const;

        public slots: void run();
        signals: void finished();

        private: void initialise();
        private: void readArguments();
        private: void finalise();
    };
} } }
