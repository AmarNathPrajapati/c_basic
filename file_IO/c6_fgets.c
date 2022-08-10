#include<stdio.h>
// fgetc is a simple function to get a string from file
// jitni bar run karate jayenge utni bar naya character read hoga.
// fgets(str,10,ptr)-->10 character str me us file se  dal do jisko ptr point kar raha hai.
int main(){
    FILE*ptr = NULL;
    ptr = fopen("chandan.txt","r");
    char str[100];
    fgets(str,10,ptr);
    printf("The character from the file is %s",str);
    fgets(str,10,ptr);
    printf("The character from the file is %s",str);
    fclose(ptr);// so that other program can open it and used it.
    return 0;
}