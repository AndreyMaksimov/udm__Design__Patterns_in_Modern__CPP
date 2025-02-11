// https://www.udemy.com/course/patterns-cplusplus/learn/lecture/7736706?start=4#notes

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

#include "Person.h"
#include "PersonBuilder.h"
#include "PersonAddressBuilder.h"
#include "PersonJobBuilder.h"

int main()
{
  Person p = Person::create()
    .lives().at("123 London Road").with_postcode("SW1 1GB").in("London")
    .works().at("PragmaSoft").as_a("Consultant").earning(10e6);

  cout << p << endl;
  getchar();
  return 0;
}
