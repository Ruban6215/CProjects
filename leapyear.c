//
// Created by Ruban on 10/10/2022.
//
#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter the year: ");
    scanf("%d",&a);
    if (a%4==0){
        if(a%100==0 && a%400!=0)
            printf("%d is a century year");
        else
            printf("%d is a leap year",a);}
    else
    {
        printf("%d is not a leap year",a);
    }
    getch();
}
