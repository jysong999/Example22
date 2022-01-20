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

// int main()
// {   
//     int x = 0;
//     cout << "Enter a number: ";
//     cin >> x;

//     if (x > 0)
//         cout << "x is positive";
//     else if (x < 0)
//         cout << "x is negative";
//     else
//         cout << "x is 0";


//     while (true)
//         Sleep(1000);

//     return 0;
// }



//Iteration statement (loops)
//2. while
//    - 형식 : while(expression) 내용
//              expression 이 true 이면 내용 실행함

int main()
{
    int n = 10;

    while (n>0) {
        cout << n << ", \n";
        --n;
        Sleep(500);
    }

    cout << "lift off! \n";
    
    Sleep(2000);
}
        
