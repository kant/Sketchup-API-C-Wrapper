// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: reference additional headers your program requires here

#include <SketchUpAPI/sketchup.h>

#define SU(api_function_call) {\
  auto su_api_result = api_function_call;\
  assert(SU_ERROR_NONE == su_api_result);\
}\

