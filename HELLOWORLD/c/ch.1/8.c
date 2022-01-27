#include<stdio.h>
#include<windows.h>

int main(void){

    int no;
    printf("enter a integer value: ");
    scanf("%d", &no);

    printf("%d plus 12 is ", no);
    printf("%d\n", no+12);

    Sleep(1000);

    return 0;

}