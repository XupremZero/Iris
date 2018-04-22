//Copyright 2018 Iris Technologies, All Rights Reserved
#include <Iris\Types.h>
#include <Iris\Kernel\Limits.h>

template<>
Bit Iris::TypeMin<Bit>()
{
	return False;
}

template<>
Bit Iris::TypeMax<Bit>()
{
	return True;
}

template<>
S8 Iris::TypeMin<S8>()
{
	return -127;
}

template<>
S8 Iris::TypeMax<S8>()
{
	return 127;
}

template<>
U8 Iris::TypeMin<U8>()
{
	return 0;
}

template<>
U8 Iris::TypeMax<U8>()
{
	return 255;
}

template<>
S16 Iris::TypeMin<S16>()
{
	return -32767;
}

template<>
S16 Iris::TypeMax<S16>()
{
	return 32767;
}

template<>
U16 Iris::TypeMin<U16>()
{
	return 0;
}

template<>
U16 Iris::TypeMax<U16>()
{
	return 65535;
}

template<>
S32 Iris::TypeMin<S32>()
{
	return -2147483647;
}

template<>
S32 Iris::TypeMax<S32>()
{
	return 2147483647;
}

template<>
U32 Iris::TypeMin<U32>()
{
	return 0;
}

template<>
U32 Iris::TypeMax<U32>()
{
	return 4294967295;
}

template<>
F32 Iris::TypeMin<F32>()
{
	return 1.175494351e-38F;
}

template<>
F32 Iris::TypeMax<F32>()
{
	return 3.402823466e+38F;
}

template<>
S64 Iris::TypeMin<S64>()
{
	return -9223372036854775807;
}

template<>
S64 Iris::TypeMax<S64>()
{
	return 9223372036854775807;
}

template<>
U64 Iris::TypeMin<U64>()
{
	return 0;
}

template<>
U64 Iris::TypeMax<U64>()
{
	return 18446744073709551615;
}

template<>
F64 Iris::TypeMin<F64>()
{
	return  2.2250738585072014e-308;
}

template<>
F64 Iris::TypeMax<F64>()
{
	return 1.7976931348623158e+308;
}