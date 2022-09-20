#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char password[12];
    cout << "프로그램을 종료하려면 암호를 입력하세요 : " << endl;
    while (true) {
        cout << "암호 : ";
        cin >> password;
        if (strcmp(password, "SeoulCyberUniversity") == 0) {
            cout << "프로그램을 종료합니다";
            break;
        }
        else cout << "틀린 암호입니다." << endl;
    }
}

