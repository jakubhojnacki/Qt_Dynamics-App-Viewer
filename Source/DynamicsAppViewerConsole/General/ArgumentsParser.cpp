#include "ArgumentsParser.hpp"
#include "../Formatters/ApplicationInformationFormatter.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console { namespace General {
    ArgumentsParser::ArgumentsParser(const Core::General::ApplicationInformation& pApplicationInformation) : applicationInformation(pApplicationInformation) {
        this->parser.setApplicationDescription(Formatters::ApplicationInformationFormatter::toString(this->applicationInformation));
        this->parser.addHelpOption();
        this->parser.addVersionOption();
        this->parser.addPositionalArgument("path", "Path to application file");
        this->parser.addOption(this->detailLevelOption);
        this->parser.addOption(this->showObjectsOption);
    }

    Arguments ArgumentsParser::parse(const QCoreApplication& pQtApplication) {
        Arguments arguments { };

        this->parser.process(pQtApplication);
        this->positionalArguments = this->parser.positionalArguments();

        arguments.setPath(this->getPositionalArgumentStringValue(0));
        arguments.setDetailLevel(this->getDetailLevelOptionValue(this->detailLevelOption));
        arguments.setShowObjects(this->getBooleanOptionValue(this->showObjectsOption));

        return arguments;
    }

    QString ArgumentsParser::getPositionalArgumentStringValue(const int pIndex) const {
        QString value { "" };
        if (this->positionalArguments.length() > pIndex)
            value = this->positionalArguments.at(pIndex);
        else
            throw ""; //TODO >>> Throw a proper exception here
        return value;
    }

    DetailLevel ArgumentsParser::getDetailLevelOptionValue(const QCommandLineOption& pOption) const {
        DetailLevel value { DetailLevel::Basic };
        if (this->parser.isSet(pOption)) {
            QString stringValue = this->parser.value(pOption);
            //TODO >>> Parse to enum
        }
        return value;
    }

    bool ArgumentsParser::getBooleanOptionValue(const QCommandLineOption& pOption) const {
        bool value = false;
        if (this->parser.isSet(pOption)) {
            QString stringValue = this->parser.value(pOption);
            //TODO >>> Parse to boolean
        }
        return value;
    }
} } } }
