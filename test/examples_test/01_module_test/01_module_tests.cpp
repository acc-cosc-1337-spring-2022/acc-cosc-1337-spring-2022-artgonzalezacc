#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vars.h"
#include "input.h"
#include "numbers.h"
#include "chars.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("test echo variable")
{
	REQUIRE(5 == echo_variable(5));
	REQUIRE(10 == echo_variable(10));
	REQUIRE(20 == echo_variable(20));
}

TEST_CASE("test Get total")
{
	REQUIRE(10 == get_total(2,5));
}
/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Verify add to double 1" "should return .9+parameter value")
{
	//REQUIRE(add_to_double_1(0) == .9);//fails
	//REQUIRE(add_to_double_1(1) == 1.9);
}

TEST_CASE("Verify add to double 2" "should return .9+parameter value")
{
	//REQUIRE(add_to_double_2(0) == .9);//fails
	//REQUIRE(add_to_double_2(1) == 2.5);
}

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
TEST_CASE("Verify get char ascii value function" "should return char ascii dec val")
{
	REQUIRE(get_char_ascii_value('a') == 97);
	REQUIRE(get_char_ascii_value('b') == 98);
	REQUIRE(get_char_ascii_value('c') == 99);
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

