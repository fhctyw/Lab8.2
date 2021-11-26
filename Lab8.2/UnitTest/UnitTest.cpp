#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab8.2\Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string signs = "!\"\'#%()[]{}.,-:;?";
			bool b = IsSpaceBeforeSybols("Hello ! , I 'm here !", signs);
			Assert::AreEqual(b, true);
		}
	};
}
