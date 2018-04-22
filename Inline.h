//Copyright 2018 Iris Technologies, All Rights Reserved
#pragma once

#ifdef _MSC_VER
#define IrisInline __forceinline
#else
#define IrisInline __attribute__((always_inline))
#endif