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

    // compound assignment : y += x : y = y + x
    b = 3;
    a = b;
    a+=2;
    cout << a;
    cout << newline;


    // increment and decrement : ++, --
    // prefix and suffix : ++x, x++
    a = 3;
    b = ++a; // a에 +1 된 후 b로 교환
    cout<< b;
    cout << newline;

    a = 3;
    b = a++; // a에 +1 되기 전 b로 교환
    cout<< b;
    cout << newline;

    // relational and comparison  ==, !=. >, <, <=, >=
    
    // logical coperators !, &&, ||
    // ! : 토글
    // && and
    // || or

    // conditional ternaty : condition ? result1 : result2  condition이 true면 result1, 아니면 result2
    int aa, bb, cc;

    aa = 2;
    bb = 7;
    cc = (aa>bb) ? aa : bb;

    cout << cc << '\n';



}
