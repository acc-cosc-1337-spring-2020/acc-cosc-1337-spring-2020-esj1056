#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing get gc content function") {
	REQUIRE(get_gc_content("AGCTATAG") == 0.375);
	REQUIRE(get_gc_content("CGCTATAG") == 0.50);
}

TEST_CASE("Testing get reverse string function") {
	string dna = "AGCTATAG";
	string dna2 = "CGCTATAG";
	REQUIRE(get_reverse_string(dna) == "GATATCGA");
	REQUIRE(get_reverse_string(dna2) == "GATATCGC");
}

TEST_CASE("Testing get dna complement function") {
	string dna3 = "AAAACCCGGT";
	string dna4 = "CCCGGAAAAT";
	REQUIRE(get_dna_complement(dna3) == "ACCGGGTTTT");
	REQUIRE(get_dna_complement(dna4) == "ATTTTCCGGG");
}