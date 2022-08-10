#include<stdio.h>
/*
    step1--declare a file pointer
    step1.5--declare a string for store the content
    step2--point this pointer to file
    step3--read the content in the file using fscanf
    step4--print the content
Importent point--
1.fscanf reads content in the file until it doen't get whitespace.
2.fprint for put content in the file.
3.fputc and fgetc me c ka matlab character hota hai.
4.fputs and fgets me s ka matlab string hota hai.
5.fputc -- put karo ek character ko file me.
6.fputs -- put karo ek string ko file me.
7.fgetc -- get a character from file.
8.fgets -- get a string from file.

*/
int main(){
    FILE *ptr = NULL;
    char string[50];
    //opening the file with read mode
    ptr = fopen("amar.txt","r");
    //reading the file
    fscanf(ptr,"%s",string);
    printf("The content in the file is\n %s",string);
    return 0;
}