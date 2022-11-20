#include <QCoreApplication>
#include <QTimer>
#include "Application.hpp"

namespace Console = Fortah::DynamicsAppViewer::Console;

int main(int argc, char *argv[]) {
    QCoreApplication qtApplication(argc, argv);

    Console::Application *application = new Console::Application(&qtApplication);
    QObject::connect(application, SIGNAL(finished()), &qtApplication, SLOT(quit()));
    QTimer::singleShot(0, application, SLOT(run()));

    return qtApplication.exec();
}
