#ifndef FACTORY_EXERCISE_PERSON_H
#define FACTORY_EXERCISE_PERSON_H

#include <string>
#include <ostream>

using namespace std;

struct Person
{
    int id;
    string name;
public:
    Person(int id, const string &name) : id(id), name(name) {}

    friend ostream &operator<<(ostream &os, const Person &person) {
        os << "id: " << person.id << " name: " << person.name;
        return os;
    }
};

class PersonFactory
{
    int id;
public:
    PersonFactory() : id(0) {}

    Person create_person(const string& name)
    {
        return {id++, name};
    }
};

#endif //FACTORY_EXERCISE_PERSON_H
