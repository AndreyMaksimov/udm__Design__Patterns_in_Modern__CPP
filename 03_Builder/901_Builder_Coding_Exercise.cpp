/*
Builder Coding Exercise
You are asked to implement the Builder design pattern for rendering simple chunks of code.

Sample use of the builder you are asked to create:

auto cb = CodeBuilder{"Person"}.add_field("name", "string").add_field("age", "int");
cout << cb;
The expected output of the above code is:

class Person
{
    string name;
    int age;
};
Please observe the same placement of curly braces and use two-space indentation.
*/

#include <string>
#include <ostream>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

struct ClassField
{
    string type;
    string name;
    const size_t indent_size = 2;

    ClassField(string name, string  type):
    type(std::move(type)), name(std::move(name))
    {}

    friend ostream& operator<<(ostream& os, const ClassField& cf)
    {
        os << string(cf.indent_size, ' ');
        os << cf.type << " " << cf.name << ";" << endl;
        return os;
    }
};

class CodeBuilder
{
    string class_name;
    vector<ClassField> class_fields;
public:
    CodeBuilder(const string& class_name):
    class_name(class_name)
    {}

    CodeBuilder& add_field(const string& name, const string& type)
    {
        class_fields.emplace_back(name, type);
        return *this;
    }

    friend ostream& operator<<(ostream& os, const CodeBuilder& obj)
    {
        os << "class " << obj.class_name << endl;
        os << "{" << endl;
        for (auto field : obj.class_fields) os << field;
        os << "};" << endl;
        return os;
    }
};


int main() {
    auto cb = CodeBuilder{"Person"}.add_field("name", "string").add_field("age", "int");
    cout << cb;
}
