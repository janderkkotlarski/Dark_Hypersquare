#include "square_type.h"

#include <iostream>

square_type random_wall(const square_type st,
                        const float fraction)
{
  return st;
}

void text_display_st(const square_type &st)
{
  char a;

  switch (st)
  {
    case square_type::none:
      a = ' ';
      break;
    case square_type::clone:
      a = '@';
      break;
    case square_type::concrete:
      a = '#';
      break;
    case square_type::alabaster:
      a = '*';
      break;
    case square_type::next:
      a = '+';
      break;
    case square_type::previous:
      a = '-';
      break;
    case square_type::portal:
      a = '%';
      break;
    case square_type::setback:
      a = '.';
      break;
    case square_type::catalyst:
      a = '&';
      break;
    case square_type::ruby:
      a = '0';
      break;
    case square_type::citrine:
      a = '1';
      break;
    case square_type::emerald:
      a = '2';
      break;
    case square_type::sapphire:
      a = '3';
  }

  std::cout << a;
}

void test_types()
{
  square_type tester{ square_type::none };

  tester;
}
