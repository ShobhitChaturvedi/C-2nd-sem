#include<stdio.h>
#include<string.h>
int main(){
    long long a,b=0;
    int count=0,last_number,first_number;
    scanf("%lld",&a);
    b=a;
    do{
        a/=10;
        count++;
    }while(a!=0);
    last_number=b%10;
    for (int i = 0; i<(count-1); i++)
    {
        b/=10;
    }
    first_number=b;
    printf("%d",first_number*last_number);
}