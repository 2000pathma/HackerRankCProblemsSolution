#include <stdio.h>
int max_of_four(int,int,int,int);
int max(int,int);
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int x,int y){
    if(x>y) return x;
    return y;
}
int max_of_four(int a,int b,int c,int d){
    return max(max(a,b),max(c,d));
}
int main() {
    int a=10, b=21, c=90, d=10;
    //scanf("%d %d %d %d", &a,&b,&c,&d);
    int ans = max_of_four(a,b,c,d);
    printf("%d", ans);
    
    return 0;
}
