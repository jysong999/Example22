#include <iostream>
using namespace std;

int main ()
{
    const char newline = '\n';
    // assignment operator (=)
    int a, b, c ;
    a = 10;
    b = 4;
    a = b; // a = 4
    b = 7; // b = 7

    cout << "a:";
    cout << a;
    cout << newline;
    cout << "b:";
    cout << b;
    cout << newline;

    //Arithmetic operator (+ - * / %:나머지)
    c = 11 % 3;
    cout << "c:";
    cout << c;
    cout << newline;
    
}