/*
Strategy Coding Exercise
Consider the quadratic equation and its canonical solution:

<image here>
https://img-c.udemycdn.com/redactor/raw/2017-07-25_13-02-23-6d1ea227c732e9ec42ca34d020236894.png

The part b^2-4*a*c is called the discriminant. Suppose we want to provide an API with two different
strategies for calculating the discriminant:

In OrdinaryDiscriminantStrategy , If the discriminant is negative, we return it as-is. This is OK,
since our main API returns std::complex  numbers anyway.
In RealDiscriminantStrategy , if the discriminant is negative, the return value is NaN (not a number).
NaN propagates throughout the calculation, so the equation solver gives two NaN values.
Please implement both of these strategies as well as the equation solver itself. With regards to plus-minus
in the formula, please return the + result as the first element and - as the second.

*/



#if 1 // Solution

#include <iostream>
#include <vector>
#include <complex>
#include <tuple>
using namespace std;

struct DiscriminantStrategy
{
    virtual double calculate_discriminant(double a, double b, double c) = 0;
};

struct OrdinaryDiscriminantStrategy : DiscriminantStrategy
{
    // todo
};

struct RealDiscriminantStrategy : DiscriminantStrategy
{
    // todo
};

class QuadraticEquationSolver
{
    DiscriminantStrategy& strategy;
public:
    QuadraticEquationSolver(DiscriminantStrategy &strategy) : strategy(strategy) {}

    tuple<complex<double>, complex<double>> solve(double a, double b, double c)
    {
        // todo
    }
};

#else // Initial

#include <iostream>
#include <vector>
#include <complex>
#include <tuple>
using namespace std;

struct DiscriminantStrategy
{
    virtual double calculate_discriminant(double a, double b, double c) = 0;
};

struct OrdinaryDiscriminantStrategy : DiscriminantStrategy
{
    // todo
};

struct RealDiscriminantStrategy : DiscriminantStrategy
{
    // todo
};

class QuadraticEquationSolver
{
    DiscriminantStrategy& strategy;
public:
    QuadraticEquationSolver(DiscriminantStrategy &strategy) : strategy(strategy) {}

    tuple<complex<double>, complex<double>> solve(double a, double b, double c)
    {
        // todo
    }
};

#endif
