#include<stdio.h>
#include<conio.h>
int main()
{
    int NO1,NO2,Mod;
    printf("\n Enter the 1st number :");
    scanf("%d",&NO1);
    printf("\n Enter the 2nd number:");
    scanf("%d",&NO2);
    Mod = NO1 % NO2;
    printf("\n Mod of the given number is %d",Mod);
    getch();
    return 0;
}

