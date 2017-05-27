#include <gtest/gtest.h>

namespace test
{

TEST(SimpleTestCase, SimpleTest)
{
    SUCCEED();
}

TEST(SimpleTestCase, DISABLED_FailingTest)
{
    FAIL();
}

}
