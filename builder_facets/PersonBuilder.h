//
// Created by lcmscheid on 2/6/19.
//

#ifndef BUILDER_FACETS_PERSONBUILDER_H
#define BUILDER_FACETS_PERSONBUILDER_H

#include "Person.h"

class PersonAddressBuilder;
class PersonJobBuilder;

class PersonBuilderBase
{
protected:
    Person& person;
    explicit PersonBuilderBase(Person& person)
            : person{ person }
    {
    }
public:
    operator Person() const
    {
        return std::move(person);
    }

    // builder facets

    PersonAddressBuilder lives() const;
    PersonJobBuilder works() const;
};

class PersonBuilder : public PersonBuilderBase
{
    Person p;
public:
    PersonBuilder(): PersonBuilderBase{p}
    {
    }

};
#endif //BUILDER_FACETS_PERSONBUILDER_H
