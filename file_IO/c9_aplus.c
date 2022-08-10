#include<stdio.h>
// a+ mode -- append content at the last and also read the file.

int main(){
    FILE*ptr = NULL;
    ptr = fopen("golu.txt","a+");
    //fputs("My name is Golu ",ptr);
    char str[100];
    fgets(str,100,ptr);
    printf("The character from the file is %s",str);
    fclose(ptr);
    return 0;
}