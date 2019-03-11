#ifndef BUILDER_EXERCISE_CODEBUILDER_H
#define BUILDER_EXERCISE_CODEBUILDER_H

#include <string>
#include <ostream>
#include <vector>

using namespace std;

class CodeBuilder
{
    string root_name;
    vector<pair<string, string>> field;
public:
    CodeBuilder(const string& class_name)
    {
        root_name = class_name;
    }

    CodeBuilder& add_field(const string& name, const string& type)
    {
        field.emplace_back(name, type);
        return *this;
    }

    friend ostream& operator<<(ostream& os, const CodeBuilder& obj)
    {
        os << "class " << obj.root_name << endl;
        os << "{" << endl;
        for (const auto& f : obj.field) {
            os << "  " << f.second << " " << f.first << ";" << endl;
        }
        os << "};" << endl;

        return os;
    }
};

#endif //BUILDER_EXERCISE_CODEBUILDER_H
