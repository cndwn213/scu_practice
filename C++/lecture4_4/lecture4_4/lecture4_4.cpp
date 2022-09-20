#include <iostream>
using namespace std;

class Rectangle{
public:
    Rectangle();
    Rectangle(int length);
    Rectangle(int w, int h);
    int width;
    int height;
    bool isSquare();
};

Rectangle::Rectangle() {
    width = height = 1;
};
Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
};
Rectangle::Rectangle(int length) {
    width = height = length;
};

bool Rectangle::isSquare() {
    if (width == height) {
        return true;
    }
    return false;
}

int main()
{
    Rectangle r1;
    cout << "이 사각형은 정사각형이 ";
    if (r1.isSquare() == 1) cout << "맞습니다." << "\n";
    else cout << "아닙니다." << endl;;

    Rectangle r2(3,5);
    cout << "이 사각형은 정사각형이 ";
    if (r2.isSquare() == 1) cout << "맞습니다." << endl;
    else cout << "아닙니다." << endl;;

    Rectangle r3(3,3);
    cout << "이 사각형은 정사각형이 ";
    if (r3.isSquare() == 1) cout << "맞습니다." << "\n";
    else cout << "아닙니다." << endl;;

    Rectangle r4(5);
    cout << "이 사각형은 정사각형이 ";
    if (r4.isSquare() == 1) cout << "맞습니다." << endl;
    else cout << "아닙니다." << endl;;
    


}

