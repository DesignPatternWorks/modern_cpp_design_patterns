//
// Created by lcmscheid on 2/6/19.
//

#include "PersonBuilder.h"
#include "PersonAddressBuilder.h"
#include "PersonJobBuilder.h"

PersonAddressBuilder PersonBuilderBase::lives() const
{
    return PersonAddressBuilder{ person };
}

PersonJobBuilder PersonBuilderBase::works() const
{
    return PersonJobBuilder{ person };
}