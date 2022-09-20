#include <iostream>
using namespace std;
class Rectangle {
public:
    int width;
    int height;
    int getArea();
};

int Rectangle::getArea() {
    return width * height;
};

int main()
{
    Rectangle r1;
    r1.width = 180;
    r1.height = 160;
    cout << "r1의 넓이는 " << r1.getArea() << "입니다." << endl;
}

