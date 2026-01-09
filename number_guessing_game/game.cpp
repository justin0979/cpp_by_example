#include "game.h"

namespace game 
{
  std::optional<int> read_number(std::istream& in)
  {
    int result{};
    if (in >> result)
    {
      return result;
    }
    in.clear();
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return {};
  }

  void guess_number_or_give_up(int number,
      std::function<std::string(int,int)> message)
  {
    std::cout << "Guess the number.\n";
    std::optional<int> guess;
    while ((guess = read_number(std::cin)))
    {
      if (guess.value() == number)
      {
        std::cout << "You guessed it." << std::endl;;
        return;
      }
      std::cout << message(number, guess.value());
      std::cout << ".\nGuess again, or type any none number to quit: ";
    }
    std::cout << std::format("The number to guess is {}\n", number);
  }

}
