#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

class Point {
    friend class PointFactory;  // this breaks the Open close principle. Ohter solution would be making the constructor
                                // public, but there would three ways of instantianting Point
    Point(float x, float y) : x(x), y(y) {}

public:
    float x, y;

    friend ostream &operator<<(ostream &os, const Point &point) {
        os << "x: " << point.x << " y: " << point.y;
        return os;
    }
};

class PointFactory {
public:
    static Point NewCartesian(float x, float y) {
        return { x, y };
    }

    static Point NewPolar(float r, float theta) {
        return { r*cos(theta), r*sin(theta) };
    }
};

int main() {
    auto p = PointFactory::NewPolar(5, M_PI_4);

    cout << p << endl;

    return 0;
}