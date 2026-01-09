#pragma once
#include <iostream>
#include <string>
#include <functional>
#include <optional>
#include <format>

namespace game
{
  std::optional<int> read_number(std::istream&);
  void guess_fixed_number_with_clues(int, std::function<std::string(int,int)>);
}
