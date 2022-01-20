// cout : standard output

#include <iostream>
#include <windows.h>

using namespace std;
// int main()
// { 
//     cout << "output sentence";

//     //chaining
//     cout << "This " << "is a " << "single C++ statement\n";

//     int age ;
//     age = 20 ; 
//     cout << "I am " << age << " years old\n " ;
//     cout << "or I can use 'endl'" << endl;
// } 


// cin : standard input

int main()
{   
    int age;
    cout << "enter your age: \n";
    cin >> age;
    cout << "your age is " << age;
    Sleep(1000);
    return 0;
}