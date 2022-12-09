#pragma once

#include <QCommandLineOption>
#include <QCommandLineParser>
#include "Arguments.hpp"
#include "../DynamicsAppViewerCore/General/ApplicationInformation.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    class ArgumentParser {
        public: ArgumentParser(const Core::General::ApplicationInformation& pApplicationInformation);

        private: Core::General::ApplicationInformation applicationInformation { };
        private: QCommandLineParser parser { };
        private: QCommandLineOption detailLevelOption { "d", "Detail level" };
        private: QCommandLineOption showObjectsOption { "o", "Show objects" };
        private: QStringList positionalArguments { };

        public: Arguments parse(const QCoreApplication& pQtApplication);

        private: QString getPositionalArgumentStringValue(const int pIndex, const QString& pName) const;
        private: DetailLevel getDetailLevelOptionValue(const QCommandLineOption& pOption) const;
        private: bool getBooleanOptionValue(const QCommandLineOption& pOption) const;
    };
} } } }
