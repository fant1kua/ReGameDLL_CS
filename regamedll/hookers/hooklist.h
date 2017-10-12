#pragma once

#include "hookers/memory.h"
#include "hookers/helper.h"
#include "hookers/hooker.h"

#define _LOG_TRACE\
	static int iNumPassed = 0;\
	UTIL_ServerPrint("%s:: iNumPassed - %d", __func__, iNumPassed++);

#define _LOG_TRACE2\
	static int iNumPassed2 = 0;\
	UTIL_ServerPrint("%s:: iNumPassed - %d", __func__, iNumPassed2++);\
	UTIL_Log("%s:: iNumPassed - %d", __func__, iNumPassed2++);

#ifdef HOOK_GAMEDLL
	// STL containers Visual Studio 6.0
	#include "stl/vector"
	#include "stl/list"

	#define STD_LIST list_vs6		// use STL containers of the old version from Visual Studio 6.0 sp6
	#define STD_VECTOR vector_vs6
#else
	#define STD_LIST list
	#define STD_VECTOR vector
#endif // HOOK_GAMEDLL
