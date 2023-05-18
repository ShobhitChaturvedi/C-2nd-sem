#include <stdio.h>
#include <math.h>
void update(int *pa,int *pb) {
    int r1,r2;
    r1=*pa+*pb;
    r2=*pa-*pb;
    *pa=r1;
    if(r2>0){ 
        *pb = r2; 
        } else{ *pb = -r2; } 
}

int main() {
    int a,b,*pa=&a,*pb=&b;
    scanf("%d %d", &a, &b);
    update(pa,pb);
    printf("%d\n%d", a, b);

    return 0;
}
