#include <QCommandLineParser>
#include <QTextStream>

#include "Application.hpp"
#include "Formatters/ApplicationInformationFormatter.hpp"
#include "Formatters/ArgumentsFormatter.hpp"
#include "General/ArgumentParser.hpp"

#include "../DynamicsAppViewerCore/General/Exception.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console {
    Application::Application(QObject* pParent) :
        QObject { pParent } {
    }

    QCoreApplication* Application::qtApplication() { return static_cast<QCoreApplication*>(this->parent()); }

    void Application::run() {
        try {
            this->initialise();
            this->readArguments();
            this->finalise();
        } catch (Core::General::Exception exception) {
            this->out << exception.toString();
            this->qtApplication()->exit(-1);
        }
    }

    void Application::initialise() {
        QCoreApplication::setApplicationName(this->applicationInformation.name());
        QCoreApplication::setApplicationVersion(this->applicationInformation.version().toString());
        QCoreApplication::setOrganizationName(this->applicationInformation.author());
        QString string = Formatters::ApplicationInformationFormatter::toString(this->applicationInformation);
        this->out << string << "\r\n";
    }

    void Application::readArguments() {
        General::ArgumentParser parser { this->library.applicationInformation() };
        this->arguments = parser.parse(*this->qtApplication());
        this->out << Formatters::ArgumentsFormatter::toString(this->arguments) << "\r\n";
    }

    void Application::finalise() {
        this->out << "Completed.\r\n";
        emit finished();
    }
} } }
