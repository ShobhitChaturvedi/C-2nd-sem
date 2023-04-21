//armstrong palindrome factorial fibonacci using function
#include <stdio.h>
void arm();
void fabb();
void pal();
void fac();
void end();
void main()
{   
    int x;
    for(int i=1;i==1;){
    printf(" \
    n 1 for armstrong, 2 for fibonacci,3 for palendrome,4 for factorial 5 to end ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        arm();
        i=1;
     
        break;
    case 2:
    fabb();  
    i=1; 
        break;
    case 3:
    pal();
    i=1;
    break;
    case 4:
    fac();
    i=1;
    break;
    case 5:
    end();
    i=0;
    }
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
void end()
{printf("thanxx!!");
}
