#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    a%4==0 &&( a%100!=0 || a%400==0)?printf("%d is leap year",a):printf("%d is not a leap year",a);
    return 0;
}