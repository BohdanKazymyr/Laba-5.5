﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 5.5/Laba 5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(1, 3);
		}
	};
}
