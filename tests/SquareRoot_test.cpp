#include "catch.hpp"
#include "../include/SquareRoot.hpp"

TEST_CASE ("calculate the square root using SquareRoot class", "[SquareRoot]") {
    SquareRoot *object = new SquareRoot();

    SECTION ("the default value of number") {
        REQUIRE(object->getNumber() == 0.0);

        SECTION ("number should change after setNumber") {
            object->setNumber(9.0);
            REQUIRE(object->getNumber() == 9.0);
        }
    }

    SECTION ("square root of zero and positive numbers") {

        object->setNumber(0.0);
        REQUIRE(object->calculate() == 0.0);
        object->setNumber(9.0);
        REQUIRE(object->calculate() == 3.0);

        SECTION ("square root of negative numbers") {
            object->setNumber(-9.0);
            REQUIRE(object->calculate() == -1);
        }
    }
}
