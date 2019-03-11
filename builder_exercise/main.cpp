#include <iostream>
#include "CodeBuilder.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto cb = CodeBuilder{"Person"}.add_field("name", "string").add_field("age", "int");

    cout << cb;

    return 0;
}