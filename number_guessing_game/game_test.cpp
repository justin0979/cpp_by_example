#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "game.h"

namespace game
{
  TEST_CASE("read_number returns an int when input is an int")
  {
    std::string input = "5";
    std::istringstream iss(input);
    std::streambuf* orig_cin = std::cin.rdbuf();
    std::cin.rdbuf(iss.rdbuf());
    std::optional<int> val = read_number(std::cin);
    CHECK(val.value() == 5);
  }

  TEST_CASE("read_number should not return a value for non-integer input")
  {
    std::string input = "Hello, World";
    std::istringstream iss(input);
    std::streambuf* origin_cin = std::cin.rdbuf();
    std::cin.rdbuf(iss.rdbuf());
    std::optional<int> val = read_number(std::cin);
    CHECK(!val.has_value());
  }
}
