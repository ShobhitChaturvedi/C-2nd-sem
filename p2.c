//maximum minimum in an array
#include <stdio.h>
int main()
{
    int arr[50],i,N,l,s;

     printf("Enter size of the array : ");
    scanf("%d", &N);

    
    printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d", & arr[i]);
    }
    l=s=arr[0];
    for(i=1;i<N;i++)
    {
        if(arr[i]>l)
        l=arr[i];
        if(arr[i]<s)
        s=arr[i];
    }
     printf("max: %d\n",l);
     printf("min: %d",s);

    return 0;
}
 
