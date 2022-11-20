#include <QCommandLineParser>
#include <QTextStream>
#include "Application.hpp"
#include "../DynamicsAppViewerCore/General/ApplicationInformation.hpp"
#include "Formatters/ApplicationInformationFormatter.hpp"
#include "Formatters/ArgumentsFormatter.hpp"

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
        Core::General::ApplicationInformation applicationInformation;
        this->out << Formatters::ApplicationInformationFormatter::toString(applicationInformation) << "\r\n";
    }

    void Application::readArguments() {
        this->arguments.parse(*this->getQtApplication());
        this->out << Formatters::ArgumentsFormatter::toString(this->arguments) << "\r\n";
    }

    void Application::finalise() {
        this->out << "Completed.\r\n";
        emit finished();
    }
} } }
