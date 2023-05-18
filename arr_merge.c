#include <stdio.h>
int main()
{
    int size1,size2,size3;
    scanf("%d",&size1);
    int arr1[size1];
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nsecond array size input\n");
    scanf("%d",&size2);
    int arr2[size2];
    for(int j=0;j<size2;j++){
        scanf("%d",&arr2[j]);
    }
    size3=size1+size2;
    int arr3[size3];
    int m=0;
    for(;m<size1;m++){
        arr3[m]=arr1[m];
    }
    for(int n=size1,j=0;n<size3;n++,j++){
        arr3[n]=arr2[j];
    }
    for(int i=0;i<size3;i++){
        printf("%d",arr3[i]);
    }
    return 0;
}