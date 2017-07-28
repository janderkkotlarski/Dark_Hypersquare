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
            std::cout << 'R';
            break;
        case hypercolor::yellow:
            std::cout << 'Y';
            break;
        case hypercolor::green:
            std::cout << 'G';
            break;
        case hypercolor::blue:
            std::cout << 'B';
            break;
    }
}
