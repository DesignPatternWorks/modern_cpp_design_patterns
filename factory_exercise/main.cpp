#include <iostream>

#include "Person.h"

using namespace std;

int main() {
    PersonFactory pf;
    auto p1 = pf.create_person("João");
    auto p2 = pf.create_person("Maria");
    auto p3 = pf.create_person("Marcela");

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    return 0;
}