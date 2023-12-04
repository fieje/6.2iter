#include "pch.h"
#include "CppUnitTest.h"
#include "../6,2iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(FindIndexOfLargestEvenTest)
        {
            const int n = 5;
            int a[n] = { 1, 2, 3, 4, 5 };
            Assert::AreEqual(3, findIndexOfLargestEven(a, n));
        }
    };
}
