#include <iostream>
using namespace std;

class Circle {
// 다른 곳에서 접근 가능함
public:
    int radius;
    double getArea();
};
// 위의 Circle Class에 있는 getArea에 대한 내용(선언부)
double Circle::getArea() {
    return 3.14 * radius * radius;
};
int main()
{
    Circle CJ;
    CJ.radius = 180;
    double area = CJ.getArea();
    cout << "cj의 면적은 " << area << "입니다." << endl;
    
    Circle DH;
    DH.radius = 160;
    double area2 = DH.getArea();
    cout << "DH의 면적은 " << area2 << "입니다." << endl;

}



