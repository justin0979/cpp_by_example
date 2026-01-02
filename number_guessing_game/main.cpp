#include <iostream>
#include "game.h"
#include <functional>
#include <string>
#include <format>

auto main(int argc, char** argv) -> int
{
  std::function<std::string(int, int)> guess_message = [](int number, int guess)
  {
    return std::format("Guess is too {}", (guess < number ? "low" : "high"));
  };

  std::cout << "Working" << std::endl;
}
