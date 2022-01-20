// cout : standard output

#include <iostream>
#include <windows.h> // for Sleep()
#include <string>


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

// int main()
// {   
//     int age;
//     cout << "enter your age: \n";
//     cin >> age;
//     cout << "your age is " << age;
//     Sleep(1000);
//     return 0;
// }


// cin and strings - getline ; extracting a string = 한 단어만 extract. cin으로 문장 받아들이려면 getlint() 함수 써야함.
// getline(cin, 저장할 변수)
// #include<string>

int main()
{
    string mystr;
    cout << "What's your name? \n" ;
    getline(cin, mystr) ;
    cout << "HEllo " << mystr << ".\n" ;
    cout << "What's your favorite team?" ;
    getline(cin, mystr) ;
    cout << "I like " << mystr << "too! \n" ;
    Sleep(1000);


    return 0;

}