#include<stdio.h>
// fputc is a simple function to put a character in file
// fputc(character,fptr)-- character ko file me dal do.
// "me string hota hai".
// 'a'me character hota hai.
int main(){
    FILE*ptr = NULL;
    ptr = fopen("golu.txt","w");
    fputc('a',ptr);
    fclose(ptr);
    return 0;
}