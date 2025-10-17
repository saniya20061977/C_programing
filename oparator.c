#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,Res=0;
    printf("\n Enter 1st number :");
    scanf("%d",&no1);
     printf("\n Enter 2nd number :");
    scanf("%d",&no2);

    printf("\n -------------*******----------------");
    Res = no1 | no2;
    printf("\n Res is %d | %d = %d",no1,no2,Res);
    printf("\n --------------*******----------------");
    getch();
    return 0;

}

