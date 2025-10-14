#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0 , squ =0;

    printf("\n Enter a number:");
    scanf("%d",&no);

    squ = no *no ;

    printf("\n Square of the given number is  %d * %d = %d",no,no,squ);
    getch();
    return 0;

}
