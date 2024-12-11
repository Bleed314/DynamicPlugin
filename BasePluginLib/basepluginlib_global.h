#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(BASEPLUGINLIB_LIB)
#  define BASEPLUGINLIB_EXPORT Q_DECL_EXPORT
# else
#  define BASEPLUGINLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define BASEPLUGINLIB_EXPORT
#endif
