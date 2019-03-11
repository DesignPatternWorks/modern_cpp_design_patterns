//
// Created by lcmscheid on 14-02-2019.
//

#ifndef FUNCTIONAL_FACTORY_HOTDRINK_H
#define FUNCTIONAL_FACTORY_HOTDRINK_H

#include <iostream>
#include <memory>

class HotDrink {
public:
    virtual ~HotDrink() = default;
    virtual void prepare(int volume) = 0;
};

class Tea : public HotDrink {
public:
    void prepare(int volume) override {
        std::cout << "Take tea bag, boil water, pour " << volume << "ml, add some lemon." << std::endl;
    }
};

class Coffee : public HotDrink {
public:
    void prepare(int volume) override {
        std::cout << "Grind some beans, boil water, pour " << volume << "ml, add cream, enjoy!" << std::endl;
    }
};

#endif //FUNCTIONAL_FACTORY_HOTDRINK_H
