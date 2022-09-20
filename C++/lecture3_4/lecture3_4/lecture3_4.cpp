#include <iostream>
#include <string>
using namespace std;

int main()
{
	string song("기억해 둘 것");
	string cj("cj");
	string singer;

	cout << song + "을 부른 가수는?"; // string 객체는 + 로 문자열 연결 가능
	cout << "(힌트 : 첫글자는 " << cj[0] << ")";
	getline(cin, singer);
	if (singer == cj) {
		cout << "정답입니다." << endl;
	}
	else {
		cout << "오답입니다.";
	}
}

