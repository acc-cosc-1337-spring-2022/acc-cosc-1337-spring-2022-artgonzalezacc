#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum of squares function")
{
	REQUIRE(14 == sum_of_squares(3));
	REQUIRE(30 == sum_of_squares(4));
	REQUIRE(55 == sum_of_squares(5));
}

TEST_CASE("Test value and reference parameters")
{
	int num1 = 0;
	int num2 = 5;
	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 0);
	REQUIRE(num2 == 50);

}

TEST_CASE("Test default values params")
{
	//REQUIRE(.825 == get_total(10));
}

TEST_CASE("Test default value params1")
{
	//REQUIRE(.825 ==get_totals(10));
}

TEST_CASE("Test overloaded functions 1")
{
	REQUIRE(1000 == get_weekly_pay(52000));
	REQUIRE(400 == get_weekly_pay(40, 10));
}