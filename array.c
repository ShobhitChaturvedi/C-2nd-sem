#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    char arr[m];
    for(int i=0;i<m;i++){
        int k;
        scanf("%d",&k);
        arr[i]=k;
    }
    for(int j=0;j<m;j++){
        printf("%d",arr[j]);
    }
    return 0;
}