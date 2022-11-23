#pragma once

#include <QtCore/qglobal.h>

#if defined(DYNAMICS_APP_VIEWER_CORE_LIBRARY)
#  define DYNAMICS_APP_VIEWER_CORE_EXPORT Q_DECL_EXPORT
#else
#  define DYNAMICS_APP_VIEWER_CORE_EXPORT Q_DECL_IMPORT
#endif
