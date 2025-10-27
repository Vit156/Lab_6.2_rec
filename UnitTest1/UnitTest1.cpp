#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_6.21.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab62RecursiveTests
{
    TEST_CLASS(MinMaxRecFunctionTests)
    {
    public:

        TEST_METHOD(TestTypicalCaseRec)
        {
            int arr[] = { 5, -2, 10, 0, 8, -5, 12 };
            int n = sizeof(arr) / sizeof(arr[0]);

            int actualMin = arr[0];
            int actualMax = arr[0];

            MinMaxRec(arr, n, actualMin, actualMax, 1);

            Assert::AreEqual(-5, actualMin);
            Assert::AreEqual(12, actualMax);
        }
    };
}