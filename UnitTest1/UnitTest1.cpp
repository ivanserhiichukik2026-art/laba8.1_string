#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\qq\source\repos\laba8.1_string\laba8.1_string\laba8.1_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81String
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCount)
        {
            string str = "I like BASIC and BASIC-80";

            int result = Count(str, 'I');

            Assert::AreEqual(3, result);
        }

        TEST_METHOD(TestChange)
        {
            string str = "I like BASIC and BASIC-80";

            string result = Change(str);

            Assert::AreEqual(string("I like Delphi and Delphi-80"), result);
        }
    };
}
