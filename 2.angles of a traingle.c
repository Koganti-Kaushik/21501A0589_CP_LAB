#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two angles:");
    scanf("%d%d",&a,&b);
    if(a>=0 && a<=180 && b>=0 && b<=180)
        c=180-(a+b);
    printf("%d",c);
    return 0;
}
