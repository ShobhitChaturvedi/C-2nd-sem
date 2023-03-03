/******************************************************************************
Write a c program to print toatal no of days in a month using switch case
*******************************************************************************/

#include <stdio.h>

int main()
{
   int N;
   scanf("%d",&N);
   switch (N) {
    // Cases for 31 Days
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 Days.");
        break;
  
    // Cases for 30 Days
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 Days.");
        break;
  
    // Case for 28/29 Days
    case 2:
        printf("28/29 Days.");
        break;
  
    default:
        printf("Invalid Month.");
        break;
    }


    return 0;
}
