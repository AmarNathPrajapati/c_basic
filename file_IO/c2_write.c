#include<stdio.h>

int main(){
    FILE*ptr = NULL;
    ptr = fopen("chandan.txt","w");
    char string[50] = "my name is chandan";
    fprintf(ptr,"%s",string);
    return 0;
}