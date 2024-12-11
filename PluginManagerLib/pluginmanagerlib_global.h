#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(PLUGINMANAGERLIB_LIB)
#  define PLUGINMANAGERLIB_EXPORT Q_DECL_EXPORT
# else
#  define PLUGINMANAGERLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define PLUGINMANAGERLIB_EXPORT
#endif
