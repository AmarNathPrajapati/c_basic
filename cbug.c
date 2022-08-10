#include<stdio.h>

int main(){
    float a;
    float r;
    printf("Enter the value of a and r\n");
    scanf("%f%f",&a,&r);
    a = a*(1+r);
    printf("the value of a is %.15f",a);
    return 0;
}