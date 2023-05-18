//third angle
#include<stdio.h>
void main(){
    float a,b,c;
    int d;
    d=a+b;
    printf("enter angles");
    scanf(" %f%f",&a,&b);
    if(d>179){
        printf("invalid input");
    }
    c=180-a-b;
    printf("The third angle is %f",c);
}