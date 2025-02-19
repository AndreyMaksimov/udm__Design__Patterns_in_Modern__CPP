/*
Decorator Coding Exercise
Roses can be red, blue or red and blue. Given the class interface Flower and class Rose, build decorators RedFlower and BlueFlower that would print the following:

Rose rose;
RedFlower red_rose{rose};
RedFlower red_red_rose{red_rose};
BlueFlower blue_red_rose{red_rose};
cout << rose.str();          // "A rose"
cout << red_rose.str();      // "A rose that is red"
cout << red_red_rose.str();  // "A rose that is red"
cout << blue_red_rose.str(); // "A rose that is red and blue"
 */


#if 1  // Solution
#include <string>
#include <iostream>
using namespace std;

struct Flower
{
    virtual string str() const = 0;
};

struct Rose : Flower
{
    string str() const override {
        return "A rose";
    }
};

struct RedFlower : Flower
{
    const Flower* p_flower {nullptr};
    RedFlower() : Flower() {}
    RedFlower(const Flower &f) : Flower(f), p_flower(&f) {

    }
    string str() const override {
        auto base_str = p_flower->str();
        if (base_str.find("red") != string::npos) return base_str;
        string append;
        if (base_str.find("that") != string::npos) {
            append = " and red";
        }
        else {
            append = " that is red";
        }
        return base_str + append;
    }
};

struct BlueFlower : Flower
{
    const Flower* p_flower {nullptr};
    BlueFlower() : Flower() {}
    BlueFlower(const Flower &f) : Flower(f), p_flower(&f) {

    }
    string str() const override {
        auto base_str = p_flower->str();
        if (base_str.find("blue") != string::npos) return base_str;
        string append;
        if (base_str.find("that") != string::npos) {
            append = " and blue";
        }
        else {
            append = " that is blue";
        }
        return base_str + append;
    }
};

int main() {
    Rose rose;
    RedFlower red_rose{rose};
    RedFlower red_red_rose{red_rose};
    BlueFlower blue_red_rose{red_rose};
    cout << rose.str() << endl; // "A rose"
    cout << red_rose.str() << endl;      // "A rose that is red"
    cout << red_red_rose.str() << endl;  // "A rose that is red"
    cout << blue_red_rose.str() << endl; // "A rose that is red and blue"
}

#else // Prototype

#include <string>
using namespace std;

struct Flower
{
    virtual string str() = 0;
};

struct Rose : Flower
{
    string str() override {
        // todo
    }
};

struct RedFlower : Flower
{
};

struct BlueFlower : Flower
{
};

nt main() {
    //Rose rose;
    //RedFlower red_rose{rose};
    // RedFlower red_red_rose{red_rose};
    // BlueFlower blue_red_rose{red_rose};
    //cout << rose.str(); // "A rose"
    // cout << red_rose.str();      // "A rose that is red"
    // cout << red_red_rose.str();  // "A rose that is red"
    // cout << blue_red_rose.str(); // "A rose that is red and blue"
}


#endif