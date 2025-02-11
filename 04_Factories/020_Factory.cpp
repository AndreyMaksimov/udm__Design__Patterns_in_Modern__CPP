#include <cmath>

enum class PointType
{
    cartesian,
    polar
  };

class Point
{
    /*Point(double a, double b, PointType type = PointType::cartesian)
    {
      if (type == PointType::cartesian)
      {
        x = a; b = y;
      } 
      else
      {
        x = a*cos(b);
        y = a*sin(b);
      }
    }*/

    // use a factory method
    Point(double x, double y) : x(x), y(y){}
public:
    double x, y;

    friend class PointFactory;
};

class PointFactory
{
    static Point NewCartesian(double x, double y)
    {
        return Point{ x,y };
    }

    static Point NewPolar(double r, double theta)
    {
        return Point{ r*cos(theta), r*sin(theta) };
    }
};
