//Copyright 2018 Iris Technologies, All Rights Reserved
#pragma once
#include <Iris\Call.h>

namespace Iris
{
	namespace Math
	{
		namespace Algebra
		{
			template<class T>
			void IFC Absolute(T& a)
			{
				if (a < 0)
					a = -a;
			}
		}
	}
}
