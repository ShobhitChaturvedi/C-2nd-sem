#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        if(i%4==0 && (i%100!=0 || i%400==0)){
            printf("%d ",i);
        }
        i=i+1;
    }
    return 0;
}