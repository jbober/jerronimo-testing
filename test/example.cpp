#include "gtest/gtest.h"
#include "unresolved_symbol.h"

TEST(example, Zero) {
  EXPECT_EQ(2+2, 4);
}
TEST(failed_test, fixed_test) {
  EXPECT_EQ(2+3, 5);
}
TEST(example, anotherOne){
	UnresolvedSymbol unresolvedSymbol;
	//unresolvedSymbol.unresolvedMethod();
	EXPECT_EQ(5, unresolvedSymbol.definedMethod());
	}
