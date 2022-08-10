#include<stdio.h>
// here we are going to define a preprocessor variable
#define pi 3.14
int main(){
    float var = pi;
    // int pi  = 10;//gives a compile error.
    // printf("The vlaue of the pi is %d\n",pi);
    printf("The value of Pi is %f",var);
    return 0;
}