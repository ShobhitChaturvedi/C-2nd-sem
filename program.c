#include <stdio.h>
int main()
{
    int size1,position,element;
    scanf("%d%d%d",&size1,&position,&element);
    int arr1[size1];
    int arr2[(size1+1)];
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int j;j<position;j++){
        arr2[j]=arr1[j];
    }
    arr2[position]=element;
    for(int m=(position+1),n=position;m<(size1+1);m++){
        arr2[m]=arr1[n];
    }
    for(int l=0;l<(size1+1);l++){
        printf("%d",arr2[l]);
    }
    return 0;
}