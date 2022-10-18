#include<stdio.h>
void main()
{
    char ch,res;
    scanf("%c",&ch);
    res=(ch>='a'&&ch<='z'||ch>='A'&&ch<='z')?printf("yes,it is an alphabet"):printf("no, it is not an alphabet");
}
