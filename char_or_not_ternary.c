#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    (int)c>=65 && (int)c<=122?printf("%c is aplhabet",c):printf("%c is not alphabet",c);
    return 0;
}