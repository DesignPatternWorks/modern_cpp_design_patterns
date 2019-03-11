#include <iostream>

using namespace std;

struct Address {
    string street, city;
    int suite;

    Address(const string &street, const string &city, int suite) : street(street), city(city), suite(suite) {}

    Address(const Address& other)
        : street{other.street}
        , city{other.city}
        , suite{other.suite}
    {}

    friend ostream &operator<<(ostream &os, const Address &address) {
        os << "street: " << address.street << " city: " << address.city << " suite: " << address.suite;
        return os;
    }
};

struct Contact {
    string name;
    Address* address;

    Contact(const string &name, Address *address) : name(name), address(address) {}

    Contact(const Contact& other)
        : name {other.name}
        , address {new Address{*other.address}}
    {}

    friend ostream &operator<<(ostream &os, const Contact &contact) {
        os << "name: " << contact.name << " address: " << *contact.address;
        return os;
    }
};

int main() {
    Contact john{"John Doe", new Address{"123 East Dr", "London", 123}};
    Contact jane = john; // shallow copy
    Contact maria{john}; // deep copy
    jane.name = "Jane Smith";
    jane.address->suite = 124;
    maria.name = "Maria João";
    maria.address->suite = 125;

    cout << john << endl << jane << endl << maria << endl;

    return 0;
}