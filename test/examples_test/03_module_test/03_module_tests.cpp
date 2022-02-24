#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function")
{
	REQUIRE(true == is_even(4));
	REQUIRE(false == is_even(5));
}

TEST_CASE("Test get generation function")
{
	REQUIRE(get_generation(2021) == "Invalid Year");
	REQUIRE(get_generation(1999) == "Centenial");
	REQUIRE(get_generation(1994) == "Millenial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby boomer");//
	REQUIRE(get_generation(1940) == "Silent Generation");
	REQUIRE(get_generation(1800) == "Invalid Year");
}

TEST_CASE("Test get option switch")
{
	REQUIRE("Invalid Option" == get_option(0));
	REQUIRE("Option 1" == get_option(1));
	REQUIRE("Option 2" == get_option(2));
	REQUIRE("Option 3" == get_option(3));
	REQUIRE("Option 4" == get_option(4));
	REQUIRE("Invalid Option" == get_option(5));
}

TEST_CASE("Test boolean expressions")//logical opertors NOT, AND, and OR
{
	//order of precedence !(not) &&(and) ||(or)
	REQUIRE(true == (! true && false) );

	//determine if a letter is a consonant
	char letter = 'a';
	REQUIRE(false == !(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'y'));

	//determine if a number is in a range of 1 to 10
	int min = 1, max = 10, num = 5;
	REQUIRE(true == (num >= min && num <= max));

	//determine if a number is not in range with OR
	num = 11;
	REQUIRE(true == (num < min || num > max));

	//determine if a number is not in range with AND
	REQUIRE(true == !(num >= min && num <= max));
}

TEST_CASE("Test AND truth table")
{
	REQUIRE(true == (true and true));
	REQUIRE(false == (true and false));
	REQUIRE(false == (false and true));
	REQUIRE(false == (false and false));
}

TEST_CASE("Test OR truth table")
{
	REQUIRE(true == (true || true));
	REQUIRE(true == (true || false));
	REQUIRE(true == (false || true));
	REQUIRE(false == (false || false));
}

TEST_CASE("Test NOT truth table")
{
	REQUIRE(false == !(true));
	REQUIRE(true == !(false));
}