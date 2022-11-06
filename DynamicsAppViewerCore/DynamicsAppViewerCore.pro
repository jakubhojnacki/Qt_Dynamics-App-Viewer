QT -= gui

TEMPLATE = lib
DEFINES += DYNAMICS_APP_VIEWER_CORE_LIBRARY

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Dynamics/Application.cpp \
    Dynamics/ApplicationBase.cpp \
    Dynamics/Dependency.cpp \
    Dynamics/IdRange.cpp \
    Dynamics/Runtime.cpp \
    Dynamics/Version.cpp \
    Library.cpp

HEADERS += \
    Dynamics/Application.hpp \
    Dynamics/ApplicationBase.hpp \
    Dynamics/Dependency.hpp \
    Dynamics/IdRange.hpp \
    Dynamics/Runtime.hpp \
    Dynamics/Version.hpp \
    Global.hpp \
    Library.hpp

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
