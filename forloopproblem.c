#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a=8,b=11,i;
    char* arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    //scanf("%d",&a);
    //scanf("%d",&b);

    for(i= a;i<=b;i++)
    {
        if(i>9)
        {
            if(i%2 ==0)
               printf("even\n");
            else {
            printf("odd\n");
            }   
        }
        else {
          puts(arr[i]);
        }
    }
    return 0;

}