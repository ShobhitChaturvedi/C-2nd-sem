//write a program to print day of week name using switch case
#include <stdio.h>

int main()
{
 int x;
 scanf("%d",&x);
 switch(x){
     case 1:
     printf("Monday");
     break;
     case 2:
     printf("Tuesday");
     break; 
     case 3:
     printf("Wednesday");
     break; 
     case 4:
     printf("thursday");
     break; 
     case 5:
     printf("Friday");
     break;
     case 6:
     printf("Saturday");
     break;
     case 7:
     printf("Sunday");
     break;
     default:
     printf("sahi no daalo");
     
 }

    return 0;
}
