#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;


TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(21114411) == string("\n ___\n.....\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(31114411) == string("\n _\n/_\\\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(41114411) == string("\n ___\n(_*_)\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(12114411) == string("\n_===_\n(...)\n( : )\n( : )"));
    CHECK(snowman(22114411) == string("\n ___\n.....\n(...)\n( : )\n( : )"));
    CHECK(snowman(32114411) == string("\n _\n/_\\\n(...)\n( : )\n( : )"));
    CHECK(snowman(42114411) == string("\n ___\n(_*_)\n(...)\n( : )\n( : )"));
    CHECK(snowman(13244423) == string("\n_===_\n(o_-)\n(] [)\n(___)"));
    CHECK(snowman(22233222) == string("\n  ___\n .....\n (o.O)/\n/(] [)\n (\" \")"));
    CHECK(snowman(34211143) == string("\n  _\n /_\\\n (o .)\n<(   )>\n(___)"));
    CHECK(snowman(43321234) == string("\n  ___\n (_*_)\n (O_o)/\n<(> <)\n(   )"));
    CHECK(snowman(13244423) == string("\n_===_\n(o_-)\n(] [)\n(___)"));
    CHECK(snowman(22233222) == string("\n  ___\n .....\n (o.O)/\n/(] [)\n(\" \")"));
    CHECK(snowman(34211143) == string("\n  _\n /_\\\n (o .)\n<(   )>\n(___)"));
    CHECK(snowman(44444444) == string("\n ___\n(_*_)\n(- -)\n(> <)\n(   )"));

}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(12341235));
    CHECK_THROWS(snowman(123412341));
    CHECK_THROWS(snowman(1234123));

}


/* Add more test cases here */