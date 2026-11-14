#include "pch.h"
#include "CppUnitTest.h"
#include "../lab09.1/var.h"
#include "../lab09.1/lab09.1.cpp"
#include "../lab09.1/dod.h"
#include "../lab09.1/sum.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
    TEST_CLASS(UnitTest91)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            nsVar::x_p = 0;
            nsVar::x_k = 1;
            nsVar::dx = 0.1;
            nsVar::e = 0.0001;
            nsSum::sum();
            Assert::AreEqual(nsVar::s, 0.841471, 0.000001);
            Assert::AreEqual(nsVar::n, 5);
        }

        TEST_METHOD(TestFirstTerm)
        {
            nsVar::x = 2.0;
            nsVar::n = 1;
            nsVar::a = 1.0;

            nsDod::dod();

            Assert::AreEqual(-2.0, nsVar::a, 0.000001);
        }

        TEST_METHOD(TestSecondTerm)
        {
            nsVar::x = 2.0;
            nsVar::n = 2;
            nsVar::a = -2.0;

            nsDod::dod();

            Assert::AreEqual(1.0 / 3.0, nsVar::a, 0.000001);
        }


        TEST_METHOD(TestCosZero)
        {
            nsVar::x = 0.0;
            nsVar::e = 0.000000001;

            nsSum::sum();

            Assert::AreEqual(1.0, nsVar::s, 0.000001);

        }

    };
}   

