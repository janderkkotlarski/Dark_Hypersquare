#include "square_type.h"

#include <iostream>

void text_display_st(const square_type &st)
{
  char a;

  switch (st)
  {
    case square_type::none:
      a = '0';
      break;
    case square_type::clone:
      a = '@';
      break;
    case square_type::concrete:
      a = '#';
      break;
    case square_type::alabaster:
      a = ' ';
      break;
    case square_type::next:
      a = ' ';
      break;
    case square_type::previous:
      a = ' ';
      break;
    case square_type::portal:
      a = ' ';
      break;
    case square_type::setback:
      a = ' ';
      break;
    case square_type::catalyst:
      a = ' ';
      break;
    case square_type::ruby:
      a = ' ';
      break;
    case square_type::citrine:
      a = ' ';
      break;
    case square_type::emerald:
      a = ' ';
      break;
    case square_type::sapphire:
      a = ' ';
  }

  std::cout << a;
}
