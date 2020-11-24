#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QLIB3_LIB)
#  define QLIB3_EXPORT Q_DECL_EXPORT
# else
#  define QLIB3_EXPORT Q_DECL_IMPORT
# endif
#else
# define QLIB3_EXPORT
#endif
