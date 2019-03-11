//
// Created by lcmscheid on 2/6/19.
//

#ifndef BUILDER_FACETS_PERSONJOBBUILDER_H
#define BUILDER_FACETS_PERSONJOBBUILDER_H

#include "PersonBuilder.h"

class PersonJobBuilder : public PersonBuilderBase
{
    typedef PersonJobBuilder Self;
public:
    explicit PersonJobBuilder(Person& person)
            : PersonBuilderBase { person }
    {
    }

    Self& at(std::string company_name)
    {
        person.company_name = company_name;
        return *this;
    }

    Self& as_a(std::string position)
    {
        person.position = position;
        return *this;
    }

    Self& earning(int annual_income)
    {
        person.annual_income = annual_income;
        return *this;
    }
};

#endif //BUILDER_FACETS_PERSONJOBBUILDER_H
