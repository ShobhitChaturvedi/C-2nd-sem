#include <stdio.h>
void sum();
void main()
{
    printf("enter two numbers to add");
    sum();
}
void sum()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}