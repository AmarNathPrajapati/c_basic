#include<stdio.h>
// r+ mode -- append content from the first

int main(){
    FILE*ptr = NULL;
    ptr = fopen("golu.txt","r+");
    fputs("My name is Golu ",ptr);
    fclose(ptr);
    return 0;
}