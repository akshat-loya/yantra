#include <math.h>

class Vec2
{
public:
    double x;
    double y;

    Vec2() : x(0), y(0) {}

    Vec2(double x, double y) : x(x), y(y) {}

    double dotProd(const Vec2& vec) const
    {
        return (this->x * vec.x + this->y * vec.y);
    }

    double crossProd(const Vec2& vec) const
    {
        return (this->x * vec.y - this->y * vec.x);
    }

    double magnitude() const
    {
        return sqrt(x*x + y*y);
    }

    Vec2 unitVec() const
    {
        double mag = this->magnitude();
        if (mag == 0.0) return Vec2(0,0);
        return Vec2(x / mag, y / mag);
    }
};