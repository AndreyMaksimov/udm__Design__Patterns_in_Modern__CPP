/*
Proxy Coding Exercise
You are given the Person  class and asked to write a ResponsiblePerson
wrapper/proxy that does the following:

Allows person to drink unless they are younger than 18 (in that case, return "too young")

Allows person to drive unless they are younger than 16 (otherwise, "too young")

In case of driving while drink, returns "dead"

The interface of ResponsiblePerson  has to match
that of Person , except for the constructor, which takes an underlying Person object..
*/

#include <string>
using namespace std;

#if 1 // Solution

class Person
{
    friend class ResponsiblePerson;
    int age;
public:
    Person(int age) : age(age) {}

    int get_age() const { return age; }
    void set_age(int age) { this->age=age; }

    string drink() const {return "drinking"; }
    string drive() const { return "driving"; }
    string drink_and_drive() const { return "driving while drunk"; }
};

class ResponsiblePerson
{
  public:
    ResponsiblePerson(const Person &person) : person(person) {}
    string drink() const {
        if (person.get_age() < 18) return "too young";
        return "drinking";
    }
    string drive() const {
        if (person.get_age() < 16) return "too young";
        return "driving";
    }
    string drink_and_drive() const {
        return "dead";
    }
    void set_age(int age) {
        person.set_age(age);
    }

private:
    Person person;
};

#else // Initial

class Person
{
    friend class ResponsiblePerson;
    int age;
public:
    Person(int age) : age(age) {}

    int get_age() const { return age; }
    void set_age(int age) { this->age=age; }

    string drink() const { return "drinking"; }
    string drive() const { return "driving"; }
    string drink_and_drive() const { return "driving while drunk"; }
};

class ResponsiblePerson
{
    ResponsiblePerson(const Person &person) : person(person) {}
    // todo
private:
    Person person;
};


#endif