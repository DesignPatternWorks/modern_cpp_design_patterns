//
// Created by lcmscheid on 2/6/19.
//

#ifndef BUILDER_FACETS_PERSONADDRESSBUILDER_H
#define BUILDER_FACETS_PERSONADDRESSBUILDER_H

#include <string>

class PersonAddressBuilder : public PersonBuilderBase
{
    typedef PersonAddressBuilder Self;
public:
    explicit PersonAddressBuilder(Person& person)
            : PersonBuilderBase{person}
    {
    }

    Self& at(std::string street_address)
    {
        person.street_address = street_address;
        return *this;
    }

    Self& with_postcode(std::string post_code)
    {
        person.post_code = post_code;
        return *this;
    }

    Self& in(std::string city)
    {
        person.city = city;
        return *this;
    }
};

#endif //BUILDER_FACETS_PERSONADDRESSBUILDER_H
