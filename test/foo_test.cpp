#include <gtest/gtest.h>

#include "foo.hpp"

TEST(FooTests, TestInteger_NotZero)
{
    const int expected = 1;
    const int actual = 0 + foo();
    ASSERT_EQ(expected, actual);
}
