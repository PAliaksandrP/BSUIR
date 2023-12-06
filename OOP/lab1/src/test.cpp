#include "pch.h"
#include "../lab1/rentangle.cpp"


TEST(TestRentangle, TestEqual) {
	rentangle a(10, 20, 14, 14);
	rentangle b(10, 20, 14, 14);
  EXPECT_TRUE(a==b);
  EXPECT_TRUE(true);
}
TEST(TestRentangle, TestIncrease) {
	rentangle a(0, 0, 5, 5);
	a.increase(2, 2);
	rentangle b(1, 1, 6, 6);
	EXPECT_TRUE(a == b);

	EXPECT_TRUE(true);
}

TEST(TestRentangle, TestMove) {
	rentangle a(0, 0, 3, 3);
	a.move(1, 2);
	rentangle b(1, 2, 4, 5);
	EXPECT_TRUE(a == b);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestPlus) {
	rentangle a(0, 0, 4, 4);
	rentangle b(0, 0, 5, 5);
	rentangle c = a + b;
	rentangle d(0, 0, 9, 9);
	EXPECT_TRUE(c == d);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestMinus) {
	rentangle a(0, 0, 4, 4);
	rentangle b(1, 1, 5, 5);
	rentangle c = a - b;
	rentangle d(1, 1, 4, 4);
	EXPECT_TRUE(c == d);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestPlusWithAssigment) {
	rentangle a(0, 0, 4, 4);
	rentangle b(0, 0, 5, 5);
	a+=b;
	rentangle d(0, 0, 9, 9);
	EXPECT_TRUE(a == d);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestMinusWithAssigment) {
	rentangle a(0, 0, 4, 4);
	rentangle b(1, 1, 5, 5);
	a -= b;
	rentangle d(1, 1, 4, 4);
	EXPECT_TRUE(a == d);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestMinusWithAssigment2) {
	rentangle a(4, 4, 0, 0);
	rentangle b(1, 1, 3, 3);
	a -= b;
	rentangle d(0, 0, 0, 0);
	EXPECT_TRUE(a == d);
	EXPECT_TRUE(true);
}

TEST(TestRentangle, TestPlusPlus) {
	rentangle a(0, 0, 4, 4);
	rentangle b(0, 0, 5, 5);
	a++;
	
	EXPECT_TRUE(a == b);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestPlusPlus2) {
	rentangle a(4, 4, 0, 0);
	rentangle b(5, 5, 0, 0);
	a++;

	EXPECT_TRUE(a == b);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestMinusMinus) {
	rentangle a(0, 0, 4, 4);
	rentangle b(0, 0, 3, 3);
	a--;

	EXPECT_TRUE(a == b);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestMinusMinus2) {
	rentangle a(4, 4, 0, 0);
	rentangle b(3, 3, 0, 0);
	a--;

	EXPECT_TRUE(a == b);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestNoEqual) {
	rentangle a(0, 0, 4, 4);
	rentangle b(0, 0, 3, 3);

	EXPECT_TRUE(a != b);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestEqual2) {
	rentangle a(0, 0, 4, 4);
	rentangle b(4, 4, 0, 0);

	EXPECT_TRUE(a != b);
	EXPECT_TRUE(true);
}
TEST(TestRentangle, TestAssigment) {
	rentangle a(0, 0, 4, 4);
	rentangle b(0, 0, 3, 3);
	a = b;
	EXPECT_TRUE(a == b);
	EXPECT_TRUE(true);
}