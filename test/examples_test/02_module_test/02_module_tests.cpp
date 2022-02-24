#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "casting.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*Test case operator precedence 1 with function argument values 12, 6 and 3 returns 14*/
TEST_CASE("Test operator precedence 1")
{
	REQUIRE(14 == operator_precedence_1(12, 6, 3));
}

/*Test case operator precedence 2 with function argument values 12, 6 and 3 returns 6*/

/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case convert_to_double to show that multiplying int and double returns a double*/

/*Test case convert double to int to show that a double converted to int truncates 
the decimal portion*/

/*Test case static cast double int to show that a double casted to int truncates
decimal portion*/

/*Test int overflow to show adding 1 to 2147483647 returns -2147483648*/

/*Test get radius of a circle with 10 to show that it returns 314.159*/
TEST_CASE("Test get area of circle")
{
	REQUIRE(314.159, get_area_of_circle(10));
}

/*Test int data size */

/*Test multi assign addition*/

