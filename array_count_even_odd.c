#include<stdio.h>
int main(){
    int m,temp,even=0,odd=0;
    scanf("%d",&m);
    char arr[m];
    for(int i=0;i<m;i++){
        int k;
        scanf("%d",&k);
        arr[i]=k;
    }
    for(int j=0;j<m;j++){
        temp=arr[j];
        if(temp%2==0){
            even++;
        }
        if(temp%2!=0){
            odd++;
        }
    }
    printf("number of even:%d\n number of odd:%d",even,odd);
    return 0;
}