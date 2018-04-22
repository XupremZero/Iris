#pragma once

#ifdef _MSC_VER
#define IFC __fastcall
#define IVC __vectorcall
#else
#define IFC __attribute__((fastcall))
#define IVC __attribute__((vectorcall))
#endif