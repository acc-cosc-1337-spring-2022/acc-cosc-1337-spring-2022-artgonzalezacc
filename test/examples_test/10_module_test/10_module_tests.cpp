#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "arrays_access.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test array list add element")
{
	int numbers[5];
    ArrayList list(numbers);
	list.Add(5);

	auto index = list.Get_Index_Of(5);
	REQUIRE(index == 0);

	list.Add(10);
	index = list.Get_Index_Of(10);
	REQUIRE(index == 1);
}

TEST_CASE("Test array list get index of")
{
	int numbers[5];
    ArrayList list(numbers);
    list.Add(5);
    list.Add(2);

	auto value = list.Get_Index_Of(5);

	REQUIRE(value == 0);
}

TEST_CASE("Test array list delete first w one element")
{
	int numbers[5];
	ArrayList list(numbers);
	list.Add(5);
	
	list.Delete(5);

	REQUIRE(list.Size() == 0);
}

TEST_CASE("Test array list delete first")
{
	int numbers[5];
	ArrayList list(numbers);
	list.Add(5);
	list.Add(2);
	list.Add(1);
	list.Add(10);
	//list.Add(8);

	list.Delete(5);
	int* nums = list.Get_Elements();
	int expected_list[3]{2,1,10};

	for(int i=0; i < 3; i++)
	{
		REQUIRE(nums[i] == expected_list[i]);
	}
}

TEST_CASE("Test array list delete middle")
{
	int numbers[5];
	ArrayList list(numbers);
	list.Add(5);
	list.Add(2);
	list.Add(1);
	list.Add(10);
	list.Add(8);

	list.Delete(1);
	int* nums = list.Get_Elements();
	int expected_list[4]{5,2,10,8};

	for(int i=0; i < 4; i++)
	{
		REQUIRE(nums[i] == expected_list[i]);
	}
}

TEST_CASE("Test array list delete last")
{
	int numbers[5];
	ArrayList list(numbers);
	list.Add(5);
	list.Add(2);
	list.Add(1);
	list.Add(10);
	list.Add(8);

	list.Delete(8);
	int* nums = list.Get_Elements();
	int expected_list[4]{5,2,1,10};

	for(int i=0; i < 4; i++)
	{
		REQUIRE(nums[i] == expected_list[i]);
	}
}
