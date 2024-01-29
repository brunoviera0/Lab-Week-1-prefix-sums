#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "prefixSum.h"

TEST_CASE("Testing non_neg_prefix_sum function") {
    CHECK(non_neg_prefix_sum({}) == true);
    CHECK(non_neg_prefix_sum({1, 1, 1}) == true);
    CHECK(non_neg_prefix_sum({-1, -1}) == false);
    CHECK(non_neg_prefix_sum({-1, 1, 1, -1}) == false);
}

TEST_CASE("Testing non_pos_prefix_sum function") {
    CHECK(non_pos_prefix_sum({}) == true);
    CHECK(non_pos_prefix_sum({1, 1, 1}) == false);
    CHECK(non_pos_prefix_sum({-1, -1}) == true);
    CHECK(non_pos_prefix_sum({1, -1, -1, 1}) == false);
}