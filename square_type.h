#ifndef SQUARE_TYPE_H
#define SQUARE_TYPE_H

enum class square_type
{
  none,
  clone,
  concrete,
  alabaster,
  next,
  previous,
  portal,
  setback,
  catalyst,
  ruby,
  citrine,
  emerald,
  sapphire
};

void text_display_st(const square_type &st);

#endif // SQUARE_TYPE_H
