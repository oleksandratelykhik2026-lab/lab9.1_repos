#include "pch.h"
#include "CppUnitTest.h"
#include "../lab09.1/lab09.1.cpp"
#include "../lab09.1/var.h"
#include "../lab09.1/dod.h"
#include "../lab09.1/sum.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
    TEST_CLASS(UnitTest91)
    {
    public:

        TEST_METHOD(TestFirstTerm)
        {
            nsVar::x = 2.0;
            nsVar::n = 1;
            nsVar::a = 1.0;

            nsDod::dod();

            Assert::AreEqual(-2.0, nsVar::a, 0.000001);
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

