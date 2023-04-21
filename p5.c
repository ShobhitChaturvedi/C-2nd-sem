//armstrong palindrome factorial fibonacci using function
#include <stdio.h>
void arm();
void fabb();
void pal();
void fac();
void main()
{
    int x;
    printf("1 for armstrong, 2 for fibonacci,3 for palendrome,4 for factorial ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        arm();
     
        break;
    case 2:
    fabb();   
        break;
    case 3:
    pal();
    break;
    case 4:
    fac();
    }
    
}
void arm()
{
    int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
  
}
void pal()
{int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
}
void fabb()
{ int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
    
  }
  void fac()
  {int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
}