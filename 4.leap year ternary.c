#include<stdio.h>
void main()
{
    int yr,res;
    scanf("%d",&yr);
    res=(yr%400==0)?(printf("It is a leap year")):(yr%100==0)?(printf("It is not a leap year")):(yr%4==0)?(printf("It is a leap year")):printf("It is not a leap year");
}
