QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Application.cpp \
        Formatters/ApplicationInformationFormatter.cpp \
        Formatters/ArgumentsFormatter.cpp \
        General/Arguments.cpp \
        General/ArgumentsParser.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Application.hpp \
    Formatters/ApplicationInformationFormatter.hpp \
    Formatters/ArgumentsFormatter.hpp \
    General/Arguments.hpp \
    General/ArgumentsParser.hpp \
    General/DetailLevel.hpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../DynamicsAppViewerCore/release/ -lDynamicsAppViewerCore
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../DynamicsAppViewerCore/debug/ -lDynamicsAppViewerCore
else:unix: LIBS += -L$$OUT_PWD/../DynamicsAppViewerCore/ -lDynamicsAppViewerCore

INCLUDEPATH += $$PWD/../DynamicsAppViewerCore
DEPENDPATH += $$PWD/../DynamicsAppViewerCore
