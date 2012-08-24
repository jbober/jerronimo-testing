#include "gtest/gtest.h"
TEST(example, Zero) {
  EXPECT_EQ(2+2, 4);
}
TEST(failed_test, fixed_test) {
  EXPECT_EQ(2+3, 5);
}
TEST(example, anotherOne){
	EXPECT_EQ(2,2);
	}
