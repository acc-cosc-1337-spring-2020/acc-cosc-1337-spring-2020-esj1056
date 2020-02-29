#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing Get Max From Vector"){
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
	REQUIRE(isprime(2) == true);
	REQUIRE(isprime(4) == false);
	REQUIRE(isprime(43) == true);
	REQUIRE(isprime(44) == false);
}

TEST_CASE("Testing Vector of Primes"){
	vector<int> testvector1{ 2,3,5,7 };
	REQUIRE(vector_of_primes(10) == testvector1);

	vector<int> testvector2{ 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
	REQUIRE(vector_of_primes(50) == testvector2);
}