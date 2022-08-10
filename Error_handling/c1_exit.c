#include<stdio.h>
#include<stdlib.h>
// exit------ aapke program se hee bhahar aa jayega.
int main(){
    int x=100;
    int y=0;
    if(y!=0){
        printf("the value of x/y is %f\n",x/y);
    }else{
        printf("division by zero is not possible\n");
        exit(-1);
    }
    return 0;
}   