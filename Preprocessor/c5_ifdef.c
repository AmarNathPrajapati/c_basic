#include<stdio.h>
# define pi 3.14
#
int main(){
    int a=0;
    #ifdef pi
    a=2;
    // #else
    // printf("pi is defined")
    #endif
    printf("The value of a is %d",a);
    return 0;
}