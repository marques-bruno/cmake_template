#include <catch2/catch_test_macros.hpp>


#include <myproject/sample_library.hpp>


TEST_CASE("Factorials are computed", "[factorial]")
{
  // NOLINTBEGIN(bugprone-chained-comparison)
  REQUIRE(factorial(0) == 1);  // cppcheck-suppress knownConditionTrueFalse
  REQUIRE(factorial(1) == 1);  // cppcheck-suppress knownConditionTrueFalse
  REQUIRE(factorial(2) == 2);  // cppcheck-suppress knownConditionTrueFalse
  REQUIRE(factorial(3) == 6);  // cppcheck-suppress knownConditionTrueFalse
  REQUIRE(factorial(10) == 362880);  // cppcheck-suppress knownConditionTrueFalse
  // NOLINTEND(bugprone-chained-comparison)
}
