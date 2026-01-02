#include "game.h"
#include <iostream>
#include <functional>
#include <string>
#include <format>

auto main(int argc, char** argv) -> int
{
  std::function<std::string(int, int)> guess_message = [](int number, int guess)
  {
    return std::format("Guess of {} is too {}", guess, (guess < number ? "low" : "high"));
  };

  game::guess_fixed_number_with_clues(42, guess_message);
}
