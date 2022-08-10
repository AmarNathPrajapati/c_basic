#include<stdio.h>
// fgetc is a simple function to get a character from file
// jitni bar run karate jayenge utni bar naya character read hoga.
int main(){
    FILE*ptr = NULL;
    ptr = fopen("chandan.txt","r");
    char c = fgetc(ptr);
    printf("The character from the file is %c",c);
    c = fgetc(ptr);
    printf("The character from the file is %c",c);
    fclose(ptr);// so that other program can open it and used it.
    return 0;
}