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
}
