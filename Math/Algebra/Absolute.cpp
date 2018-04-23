//Copyright 2018 Iris Technologies, All Rights Reserved
#include <Iris\Math\Algebra\Absolute.h>
#include <Iris\Types.h>

template<>
void IFC Iris::Math::Algebra::Absolute(F32& a)
{
	if (a < -F32Epsilon)
		a = -a;
}

template<>
void IFC Iris::Math::Algebra::Absolute(F64& a)
{
	if (a < -F64Epsilon)
		a = -a;
}