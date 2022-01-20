// compound statement : group of statements 
// {AAA; BBB; CCC;} --> 전체 블럭이 하나의 statement로 간주됨



#include <iostream>
#include <windows.h>
// #include <string>
// #include <sstream>
using namespace std;

//selection statement
//1. if and else
//    - 형식 : if (조건) 내용

int main()
{   
    int x = 0;
    cout << "Enter a number: ";
    cin >> x;

    if (x > 0)
        cout << "x is positive";
    else if (x < 0)
        cout << "x is negative";
    else
        cout << "x is 0";


    while (true)
        Sleep(1000);

    return 0;
}
