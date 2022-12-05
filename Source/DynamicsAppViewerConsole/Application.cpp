#include <QCommandLineParser>
#include <QTextStream>
#include "Application.hpp"
#include "Formatters/ApplicationInformationFormatter.hpp"
#include "Formatters/ArgumentsFormatter.hpp"
#include "General/ArgumentsParser.hpp"

namespace Fortah { namespace DynamicsAppViewer { namespace Console {
    Application::Application(QObject* pParent) : QObject(pParent) {
    }

    QCoreApplication* Application::getQtApplication() {
        return static_cast<QCoreApplication*>(this->parent());
    }

    void Application::run() {
        this->initialise();
        this->readArguments();
        this->finalise();
    }

    void Application::initialise() {
        this->out << Formatters::ApplicationInformationFormatter::toString(this->applicationInformation) << "\r\n";
    }

    void Application::readArguments() {
        General::ArgumentsParser parser { this->library.getApplicationInformation() };

        this->arguments.parse(*this->getQtApplication());
        this->out << Formatters::ArgumentsFormatter::toString(this->arguments) << "\r\n";
    }

    void Application::finalise() {
        this->out << "Completed.\r\n";
        emit finished();
    }
} } }
