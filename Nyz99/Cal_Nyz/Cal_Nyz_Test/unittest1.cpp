#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Cal_Nyz\Cal_Nyz.h"
//#pragma comment(lib, "libName")
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Cal_Nyz_Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Cal_Nyz* calc = new Cal_Nyz();
			string ret = calc->Solve("12*2");
			Assert::AreEqual(ret, (string)"12*2=24");
		}

	};
}