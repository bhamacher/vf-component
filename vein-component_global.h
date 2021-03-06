#ifndef VEINCOMPONENT_GLOBAL_H
#define VEINCOMPONENT_GLOBAL_H

#include <QtCore/qglobal.h>
#include "vh_logging.h"

Q_DECLARE_LOGGING_CATEGORY(VEIN_COMPONENT)

#define VCMP_COMPONENTDATA_DATATYPE 0
#define VCMP_ENTITYDATA_DATATYPE 1
#define VCMP_INTROSPECTIONDATA_DATATYPE 2
#define VCMP_ERRORDATA_DATATYPE 3
#define VCMP_REMOTEPROCEDUREDATA_DATATYPE 4

#if defined(VEINCOMPONENT_LIBRARY)
#  define VEINCOMPONENTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define VEINCOMPONENTSHARED_EXPORT Q_DECL_IMPORT
#endif


#endif // VEINCOMPONENT_GLOBAL_H
