#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"
TEST(RandTest, RandEvaluateNonZero) {
Rand* test = new Rand();
EXPECT_LT(test->evaluate(),99);
}
#endif //__RAND_TEST_HPP__

