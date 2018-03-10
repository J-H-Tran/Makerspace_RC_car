#include "../Functions2.h"
#include "gtest/gtest.h"

namespace {
	TEST(AdderTest, doesitadd){
		EXPECT_EQ(2, adder4(1, 1));
	}
}
