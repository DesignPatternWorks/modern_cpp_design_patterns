//
// Created by lcmscheid on 14-02-2019.
//

#ifndef FUNCTIONAL_FACTORY_HOTDRINKFACTORY_H
#define FUNCTIONAL_FACTORY_HOTDRINKFACTORY_H

#include "HotDrink.h"

class HotDrinkFactory {
public:
    virtual std::unique_ptr<HotDrink> make() const = 0;
};

class TeaFactory : public HotDrinkFactory {
public:
    std::unique_ptr<HotDrink> make() const override {
        return std::make_unique<Tea>();
    }
};

class CoffeeFactory : public HotDrinkFactory {
public:
    std::unique_ptr<HotDrink> make() const override {
        return std::make_unique<Coffee>();
    }
};

#endif //FUNCTIONAL_FACTORY_HOTDRINKFACTORY_H
