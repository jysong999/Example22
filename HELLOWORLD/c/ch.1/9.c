#include<stdio.h>
#include<windows.h>


int main(void)
{
    int no;

    printf("enter a integer value : ");
    scanf("%d", &no);

    printf("%d minus 6 is ", no);
    printf("%d,\n", no -6);


    Sleep(2000);
    return 0;

}