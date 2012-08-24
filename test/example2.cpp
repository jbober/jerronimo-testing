#include "gtest/gtest.h"
TEST(example3, Zero) {
  EXPECT_EQ(2+2, 4);
}
TEST(example4, not_failing_test) {
  EXPECT_EQ(2+3, 5);
}