#include <cassert>
#include "../src/calculator.h"

int main()
{
    // Тест 1
    assert(add(2, 3) == 5);

    // Тест 2
    assert(subtract(5, 3) == 2);

    return 0;
}