/*
Bridge Coding Exercise
You are given an example of an inheritance hierarchy which results in Cartesian-product duplication.

Please refactor this hierarchy, giving the base class Shape  an initializer that takes a Renderer
defined as

struct Renderer
{
  virtual string what_to_render_as() const = 0;
}
as well as VectorRenderer and RasterRenderer.

The expectation is that each constructed object has a member called str()
that returns its textual representation, for example,

Triangle(RasterRenderer()).str() // returns "Drawing Triangle as pixels"
 */

#if 0 // Task
#include <string>
using namespace std;

struct Shape
{
    string name;
}

struct Triangle : Shape
{
    Triangle()
    {
        name = "Circle";
    }
}

struct Square : Shape
{
    Square()
    {
        name = "Square";
    }
}

struct VectorSquare : Square
{
    string str() const
    {
        return "Drawing " + name + " as lines";
    }
}

struct RasterSquare : Square
{
    string str() const
    {
        return "Drawing " + name + " as pixels";
    }
}

// imagine e.g. VectorTriangle/RasterTriangle etc. here
#else // Solution
#include <string>
using namespace std;

struct Renderer
{
    virtual string what_to_render_as() const = 0;
};
struct Shape
{
    Shape(const Renderer& r) : renderer(r)
      {}
    const Renderer& renderer;
    string name;
    string str() const {
      return "Drawing " + name + " as " + renderer.what_to_render_as();
    }
};

struct Triangle : Shape
{
    Triangle(const Renderer& r) : Shape(r)
    {
        name = "Circle";
    }
};

struct Square : Shape
{
    Square (const Renderer& r) : Shape(r)
    {
        name = "Square";
    }

};

struct VectorRenderer : Renderer
{
    string what_to_render_as() const override { return "lines"; }
};

struct RasterRenderer : Renderer
{
    string what_to_render_as() const override { return "pixels"; }
};

// imagine e.g. VectorTriangle/RasterTriangle etc. here
#endif