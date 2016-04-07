#include "catch.hpp"

#include "../include/functions.hpp"

TEST_CASE ("calculate the square root", "[square_root]") {
    SECTION ("of positive and non-zero numbers") {
        REQUIRE(square_root(324.0) == 18.0);
        REQUIRE(square_root(645.16) == 25.4);
        REQUIRE(square_root(2533.310224) == 50.3321);
    }

    SECTION ("of negative and zero numbers") {
        REQUIRE(square_root(0.0) == 0.0);
        REQUIRE(square_root(-22.0) == -1);
    }
}

TEST_CASE ("exit the program", "[die]") {
    SECTION("with successfull and error codes") {
        // https://github.com/philsquared/Catch/issues/553
        REQUIRE(1 == 0);
    }
}

