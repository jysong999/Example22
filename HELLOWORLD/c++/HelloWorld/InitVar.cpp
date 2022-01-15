// initialization of var

#include <iostream>
using namespace std;

int main(){
    int a = 5; // 1st method a = 5
    int b(5); // 2nd method b(5)
    int c{5}; // 3rd method c{5}
    int result;

    a = a + b;
    result = a - c;
    cout << result;

    return 0; //terminate the program
    
}
