//
// Created by lcmscheid on 2/6/19.
//
#include "Person.h"
#include "PersonBuilder.h"

PersonBuilder Person::create()
{
    return PersonBuilder{};
}