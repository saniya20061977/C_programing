#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0 , cube =0;

    printf("\n Enter a number:");
    scanf("%d",&no);

    cube = no * no * no ;

    printf("\n Cube of the given number is  %d * %d  * %d = %d",no,no,no,cube);
    getch();
    return 0;

}
