/*
Composite Coding Exercise
Consider the code presented below. The sum()  function takes a vector of pointers to either SingleValue or ManyValues instances and adds up all their elements together.

Please complete the implementation so that the sum()  function starts to operate correctly. This may involve giving the classes a common interface, among other things.

Here is an example of how the function might be used:

SingleValue single_value{ 1 };
ManyValues other_values;
other_values.add(2);
other_values.add(3);
sum({ &single_value, &other_values }); // returns 6
 */

# if 1 // Solution
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;

struct ContainsIntegers
{
 virtual int sum() = 0;
};

struct SingleValue : ContainsIntegers
{
 int value{ 0 };

 SingleValue() = default;

 explicit SingleValue(const int value)
   : value{value}
 {
 }

 int sum() override {
  return value;
 }
};

struct ManyValues : vector<int>, ContainsIntegers
{
 void add(const int value)
 {
  push_back(value);
 }

 int sum() override {
  return accumulate(begin(), end(), 0);
 }
};

int sum(const vector<ContainsIntegers*> items)
{
 int result{0};
 for (auto item : items)
  result += item->sum();
 return result;
}


#else // Initial code
#include "exercise.h"

int sum(const vector<ContainsIntegers*> items)
{
 // TODO
}
#endif

int main(int ac, char* av[])
{
}
