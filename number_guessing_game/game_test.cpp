#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "game.h"

namespace game
{
  TEST_CASE("testing return type of read_number")
  {
    std::string input = "5";
    std::istringstream iss(input);
    std::streambuf* orig_cin = std::cin.rdbuf();
    std::cin.rdbuf(iss.rdbuf());
    std::optional<int> val = read_number(std::cin);
    CHECK(val.value() == 5);
  }
}
