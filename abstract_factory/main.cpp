#include <iostream>
#include "DrinkFactory.h"

int main() {
    DrinkFactory df;
    df.make_drink("coffee");
    df.make_drink("tea");

    return 0;
}