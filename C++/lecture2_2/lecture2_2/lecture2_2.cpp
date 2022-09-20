#include <iostream>

double Circle_area(int r);

double Circle_area(int r) {
    std::cout << "r은? " << r << std::endl;
    return 3.14 * r * r;
}
int main()
{
    std::cout << "Hello World!\n" << "안녕\n";
    std::cout << "seoul cyber" << std::endl;

    // 숫자와 문자를 선언하고 출력
    int n = 13;
    char c = '??';

    std::cout << c << "c" << "seoul cyber" << false << n << "n" << true << std::endl;


    // 원의 면적 구하는 함수 호출 및 지름 선언
    double s = 254.4;
    std::cout << s;
    std::cout << "s + 9 = " << s + 9 << '\n';
    std::cout << "원의 면적은 " << Circle_area(s) << std::endl;

    // using을 사용하면 std를 계속 사용하지 않아도 된다
    // using namespace std;
    using std::cout;
    using std::endl;

    cout << "안녕하세요" << endl;
}

// 한 줄 전체를 주석으로 사용하려면 맨 앞에 // 를 붙이면 된다
/*
    여러줄을 주석으로 하려면 /*를 사용하면 된다
*/

