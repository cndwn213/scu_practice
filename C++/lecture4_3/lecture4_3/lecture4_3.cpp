#include <iostream>
using namespace std;

class Circle {
public:
    Circle();
    Circle(int r);
    int radius;
    double getArea();
};
Circle::Circle() {
    radius = 1;
    cout << "반지름" << radius << "원" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름" << radius << "원" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main()
{
    Circle c1;
    double area1 = c1.getArea();
    cout << "c1의 면적은 " << area1 << endl;

    Circle c2(180);
    double area2 = c2.getArea();
    cout << "c2의 면적은 " << area2 << endl;
}
