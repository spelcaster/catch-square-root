#include "catch.hpp"
#include "../include/SquareRoot.hpp"

SCENARIO (
    "[BDD] calculate the square root using SquareRoot class",
    "[SquareRootBDD]"
) {
    GIVEN ("a square root object") {
        SquareRoot *object = new SquareRoot();

        WHEN ("the object is created") {
            THEN ("number has a default value") {
                REQUIRE(object->getNumber() == 0.0);
            }
        }

        WHEN ("the number is changed") {
            object->setNumber(9.0);

            THEN ("the number must be updated") {
                REQUIRE(object->getNumber() == 9.0);
            }
        }


        WHEN ("number is zero") {
            object->setNumber(0.0);

            THEN ("the square root is calculated") {
                REQUIRE(object->calculate() == 0.0);
            }
        }

        WHEN ("number is positive") {
            object->setNumber(9.0);

            THEN ("the square root is calculated") {
                REQUIRE(object->calculate() == 3.0);
            }
        }

        WHEN ("number is negative") {
            object->setNumber(-9.0);

            THEN ("result is a negative constant") {
                REQUIRE(object->calculate() == -1);
            }
        }

    }
}
