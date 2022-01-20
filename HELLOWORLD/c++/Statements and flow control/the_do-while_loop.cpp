

//3. do while
//    - 형식 : do {내용} while (조건);
//    - {내용}이 최소한 1번 실행되어야할 때 
//    - 아래 내용에서는 enter text 가 적어도 한 번은 실행되고 끝나게 됨.

//goodbye 입력할 때 까지 계속 반복되는 함수

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    string str ;
    
    do {
        cout << "Enter text : ";
        getline (cin, str);
        cout << "You entered : " << str << '\n';
    }
    while (str != "goodbye") ; // goodbye 아닌 동안에 do를 반복

    
}