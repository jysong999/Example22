
//4. for
//    - 형식 : for (initialization; condition; increase) 내용 ;
//    - while 과 다른 점 : <초기값> 과 <증가분> 을 포함함.
//    - for() 안의 세 가지는 비워놓을 수 있다. 단, ;으로 구분은 해줘야됨 : for(;condition;)
//    - 2개 이상의 변수도 처리 가능. ex) for ( n=0, i=100; n!=i; ++n, --i )

//카운트 다운
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    for (int n=10; n>0; n--)
    {
        cout << n << ",\n";
        Sleep(500);
    }
    cout << "lift off! \n";
    Sleep(500);
}