#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test reference and pointer parameters")
{
	auto num1= 1, num2=2;

	ref_ptr(num1, &num2);

	REQUIRE(num1 == 10);
	REQUIRE(num2 == 20);

}

TEST_CASE("Test initialize vector size")
{
	Vector v(3);//constructor creates dynamic array

	REQUIRE(v.Size() == 3);
	//when function exits, dynamic array is cleared/deleted
}

TEST_CASE("Test Vector memberwise copy for stack and pointer class variables")
{
	Vector v(3);
	Vector v1 = v;
}

TEST_CASE("Test the pointer copy between classes")
{
	Vector v(3);
	Vector v1 = v;
	v[0] = 5;

	REQUIRE(v[0] != v1[0]);
}

TEST_CASE("Test overwriting an existing class with a copy")
{
	Vector v(3);
	Vector v1(3);
	v1 = v;
	v[0] = 5;

	REQUIRE(v[0] != v1[0]);
}