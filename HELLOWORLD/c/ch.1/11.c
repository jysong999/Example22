#include<stdio.h>
#include<windows.h>

int main(void){

    int n1, n2;
    int dup;

    puts("enter 2 integer values ");
    printf("number 1 : "); scanf("%d", &n1);
    printf("number 2 : "); scanf("%d", &n2);

    dup = n1*n2;

    printf("duplication is %d .\n", dup);

    Sleep(3000);
    return 0;


}