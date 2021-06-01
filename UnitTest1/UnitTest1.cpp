#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <algorithm>
#include "C:\Users\mihan\source\repos\coursework\coursework\SearchBi.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	std::vector <double> num = { -56,-32,-16,52,67,89 };
	std::vector <double> num2 = { -67.43,-32.45,0 };
	std::vector <double> num3 = { 0,2.3,5.6,7.8 };
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Assert::AreEqual( searchbi(num,-32) , 1);
			Assert::AreEqual( searchbi(num2, 0), 2);
			Assert::AreEqual( searchbi(num3, 200), -1);//Число не найдено
			Assert::AreEqual( searchbi(num3, 2.3), 1);
			Assert::AreEqual("54 56 78", "54 56 78");
		}
	};
}
