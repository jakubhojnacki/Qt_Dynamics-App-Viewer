#include "General/Arguments.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    Arguments::Arguments() {
        this->commandLineParser.addPositionalArgument("path", "Path to application file");
    }

    const QString& Arguments::getPath() const { return this->path; }

    void Arguments::parse(const QCoreApplication& pQtApplication) {
        this->commandLineParser.process(pQtApplication);
        QStringList positionalArguments = commandLineParser.positionalArguments();
        this->path = positionalArguments.at(0);
    }
} } } }
