/*
Adapter Coding Exercise
Here's a very synthetic example for you to try.

You are given a Rectangle  protocol and an extension method on it.
Try to define a SquareToRectangleAdapter
that adapts the Square  to the Rectangle  interface.
 */

struct Square
{
    int side{ 0 };


    explicit Square(const int side)
      : side(side)
    {
    }
};

#if 0 // Task:
struct Square
{
    int side{ 0 };


    explicit Square(const int side)
      : side(side)
    {
    }
};

struct Rectangle
{
    virtual int width() const = 0;
    virtual int height() const = 0;

    int area() const
    {
        return width() * height();
    }
};

struct SquareToRectangleAdapter : Rectangle
{
    SquareToRectangleAdapter(const Square& square)
    {
        // todo
    }
    // todo
};
#else // Solution:

struct Square
{
    int side{ 0 };


    explicit Square(const int side)
      : side(side)
    {
    }
};
struct Rectangle
{
    virtual int width() const = 0;
    virtual int height() const = 0;

    int area() const
    {
        return width() * height();
    }
};

struct SquareToRectangleAdapter : Rectangle
{
    SquareToRectangleAdapter(const Square& square)
    {
        w = h = square.side;
    }
    int w, h;
    virtual int width() const {return w;}
    virtual int height() const {return h;}
};
#endif
