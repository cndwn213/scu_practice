#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	/*
	// 입력할 변수 먼저 선언하고 cin를 사용해 변수에 값을 대입시킨다.
	cout << "가로 길이 입력 :";
	float width;
	cin >> width;

	// 입력할 변수 먼저 선언하고 cin를 사용해 변수에 값을 대입시킨다.
	cout << "세로 길이 입력 :";
	float height;
	cin >> height;

	double area = width * height;
	cout << "사각형의 크기는 " << area << endl;

	// width, height 동시 입력 가능
	cout << "사각형의 가로, 세로 길이를 입력하세요 : ";
	float width2;
	float height2;
	cin >> width2 >> height2;
	double area2 = width2 * height2;
	cout << "사각형의 크기는 " << area2 << endl;
	*/

	// char 문자열 사용하는 법
	cout << "이름을 입력하세요 : ";
	char name[11]; // 한글은 5개 글자, 영어는 10개까지 저장 가능
	cin >> name; // 키보드로부터 문자열을 읽게 된다
	cout << "이름은 " << name << " 입니다" << endl;


}

