#include "textout.h"

void textout(const hypercolor &col) noexcept
{
    switch (col)
    {
        case hypercolor::clear:
            std::cout << ' ';
            break;
        case hypercolor::white:
            std::cout << 'W';
            break;
        case hypercolor::gray:
            std::cout << 'G';
            break;
        case hypercolor::dark:
            std::cout << 'D';
            break;
        case hypercolor::spectrum:
            std::cout << 'S';
            break;
        case hypercolor::purple:
            std::cout << 'P';
            break;
        case hypercolor::red:
            std::cout << 'r';
            break;
        case hypercolor::yellow:
            std::cout << 'y';
            break;
        case hypercolor::green:
            std::cout << 'g';
            break;
        case hypercolor::blue:
            std::cout << 'b';
            break;
        case hypercolor::SIZE:
            break;
    }
}
