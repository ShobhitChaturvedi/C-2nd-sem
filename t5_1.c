#include <stdio.h>
int main()
{
    int t,flag1,z,ans;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x,y,sum1;
        scanf("%d%d",&x,&y);
        sum1=x+y;
        for(int j=sum1+1;;j++){
            for(int m=0;m<j;m++){
                if(j/m!=0){flag1=0;}
                if(j/m==0){flag1=1;}
            }
            if(flag1=0)
            {
                z=j;
                break;
            }
        }
        ans=z-x-y;
        printf("%d\n",ans);
        
    }
}
