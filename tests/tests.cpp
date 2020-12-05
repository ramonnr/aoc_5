#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>
#include <tuple>
#include "boarding.h"

TEST_CASE( "ROW" ){

    std::vector<std::pair<std::string, int>> seating_expected = {
        {"FBFBBFFRLR", 44},
        {"BFFFBBFRRR", 70},
        {"FFFBBBFRRR", 14},
        {"BBFFBBFRLL", 102}
    };

    for( auto [seating, expected] : seating_expected ){
        REQUIRE( boarding::row(seating) == expected );
    }
    
}

TEST_CASE( "COL") {
    
    std::vector<std::pair<std::string, int>> seating_expected = {
        {"FBFBBFFRLR", 5},
        {"BFFFBBFRRR", 7},
        {"FFFBBBFRRR", 7},
        {"BBFFBBFRLL", 4}
    };

    for( auto [seating, expected] : seating_expected ){
        REQUIRE( boarding::col(seating) == expected );
    }

}


TEST_CASE( "ID" ){
    
    std::vector<std::pair<std::string, int>> seating_expected = {
        {"FBFBBFFRLR", 357},
        {"BFFFBBFRRR", 567},
        {"FFFBBBFRRR", 119},
        {"BBFFBBFRLL", 820}
    };

    for( auto [seating, expected] : seating_expected ){
        REQUIRE( boarding::id(seating) == expected );
    }

}
