QT -= gui

TEMPLATE = lib
DEFINES += DYNAMICS_APP_VIEWER_CORE_LIBRARY

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Adapters/ApplicationReader.cpp \
    Adapters/ManifestXmlReader.cpp \
    Data/Application.cpp \
    Data/Dependency.cpp \
    Data/IdRange.cpp \
    Data/Manifest.cpp \
    Data/ManifestBase.cpp \
    Data/Runtime.cpp \
    Data/Version.cpp \
    General/ApplicationInformation.cpp \
    Library.cpp

HEADERS += \
    Adapters/ApplicationReader.hpp \
    Adapters/ManifestXmlReader.hpp \
    Data/Application.hpp \
    Data/Dependency.hpp \
    Data/IdRange.hpp \
    Data/Manifest.hpp \
    Data/ManifestBase.hpp \
    Data/Runtime.hpp \
    Data/Version.hpp \
    General/ApplicationInformation.hpp \
    Global.hpp \
    Library.hpp

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
