#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    // Complete this function  
    int temp1,temp2;
    temp1=*a;
    temp2=*b;
    *a=temp1+temp2;
    *b=abs(temp1-temp2);
    
}

int main() {
    int a=52185757, b=83911388;
    int *pa = &a, *pb = &b;
    
   // scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}