#include "ArgumentParser.hpp"
#include "../Formatters/ApplicationInformationFormatter.hpp"
#include "../../DynamicsAppViewerCore/General/Exception.hpp"
#include "../../DynamicsAppViewerCore/General/Bool.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    ArgumentParser::ArgumentParser(const Core::General::ApplicationInformation& pApplicationInformation)
        : applicationInformation { pApplicationInformation } {
        this->parser.setApplicationDescription(Formatters::ApplicationInformationFormatter::toString(this->applicationInformation));
        this->parser.addHelpOption();
        this->parser.addVersionOption();
        this->parser.addPositionalArgument("path", "Path to application file");
        this->parser.addOption(this->detailLevelOption);
        this->parser.addOption(this->showObjectsOption);
    }

    Arguments ArgumentParser::parse(const QCoreApplication& pQtApplication) {
        Arguments arguments { };

        this->parser.process(pQtApplication);
        this->positionalArguments = this->parser.positionalArguments();

        arguments.setPath(this->getStringPositionalArgumentValue(0, "Path"));
        arguments.setDetailLevel(this->getDetailLevelOptionValue(this->detailLevelOption));
        arguments.setShowObjects(this->getBooleanOptionValue(this->showObjectsOption));

        return arguments;
    }

    QString ArgumentParser::getStringPositionalArgumentValue(const int pIndex, const QString& pName) const {
        QString value { "" };
        if (this->positionalArguments.length() > pIndex)
            value = this->positionalArguments.at(pIndex);
        else
            throw Core::General::Exception { QString("Argument '%1' hasn't been provided").arg(pName) };
        return value;
    }

    DetailLevel ArgumentParser::getDetailLevelOptionValue(const QCommandLineOption& pOption) const {
        DetailLevel value { DetailLevel::Basic };
        if (this->parser.isSet(pOption)) {
            QString stringValue = this->parser.value(pOption);
            value = DetailLevel::parse(stringValue);
        }
        return value;
    }

    bool ArgumentParser::getBooleanOptionValue(const QCommandLineOption& pOption) const {
        bool value = false;
        if (this->parser.isSet(pOption)) {
            QString stringValue = this->parser.value(pOption);
            value = Core::General::Bool::parse(stringValue);
        }
        return value;
    }
} } } }
