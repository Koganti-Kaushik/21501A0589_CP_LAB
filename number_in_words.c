#include<stdio.h>
int main()
{
    int n,rem,sum;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    while(sum>0)
    {
        switch(sum%10)
        {
            case 0:printf("zero "); break;
            case 1:printf("one "); break;
            case 2:printf("two "); break;
            case 3:printf("three "); break;
            case 4:printf("four "); break;
            case 5:printf("five "); break;
            case 6:printf("six "); break;
            case 7:printf("seven "); break;
            case 8:printf("eight "); break;
            case 9:printf("nine "); break;
        }
        sum=sum/10;
    }
    return 0;

}
