#pragma once

#include <QCommandLineParser>

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    class Arguments {
        public: Arguments();

        private: QCommandLineParser commandLineParser { };

        private: QString path { "" };
        public: const QString& getPath() const;

        public: void parse(const QCoreApplication& pQtApplication);
    };
} } } }
