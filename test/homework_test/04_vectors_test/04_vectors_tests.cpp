#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*TEST_CASE("Testing Get Max From Vector"){
	vector<int> integers{ 3,8,1,99,1000 };
	int max = get_max_from_vector(integers);
	REQUIRE(max == 1000);

	vector<int> integers2{ 15,12,11,99,88 };
	int max2 = get_max_from_vector(integers2);
	REQUIRE(max2 == 99);

	vector<int> integers3{ 150,120,11,990,88888 };
	int max3 = get_max_from_vector(integers3);
	REQUIRE(max3 == 88888);
}

TEST_CASE("Testing Is Prime") {

}*/