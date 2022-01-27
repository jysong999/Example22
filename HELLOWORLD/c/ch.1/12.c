#include<stdio.h>
#include<windows.h>

int main(){

    int n1, n2, n3;
    int add;

    puts("enter 3 integer values");
    printf("number 1 : ");  scanf("%d", &n1);
    printf("number 2 : ");  scanf("%d", &n2);
    printf("number 3 : ");  scanf("%d", &n3);

    add = n1+n2+n3;
    printf("addition is %d . \n", add);

    Sleep(3000);
    return 0;

}