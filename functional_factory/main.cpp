#include <iostream>
#include "DrinkFactory.h"

using namespace std;

int main() {
    DrinkFactory df;
    df.make_drink("coffee");
    df.make_drink("tea");

    cout << "---------------------" << endl;

    DrinkWithVolumeFactory dv;
    dv.make_drink("tea");
    dv.make_drink("coffee");

    return 0;
}