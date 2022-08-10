#include<stdio.h>
// the ## operator
#define var(name,num) name ##num
//her var function concate the two datatypes.
int main(){
    int x1 = 125;
    int x2 = 250;
    int x3 = 500;
    int var(x1,x2) = x1+x2;
    printf("%d\n",var(x1,x2));
    printf("%d\n",x1x2);
    // printf("%d\n",var(x,3));
    // printf("%d\n",var(x,1));
    // printf("%d\n",var(x,2));
    return 0;
}