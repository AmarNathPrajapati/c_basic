#include<stdio.h>
// w+ mode -- can create new fiel and also read the file.

int main(){
    FILE*ptr = NULL;
    ptr = fopen("golu1.txt","w+");
    //fputs("My name is Golu ",ptr);
    // fputs("My name is Golu ",ptr);
    char str[100];
    fgets(str,100,ptr);
    printf("The character from the file is %s",str);
    fclose(ptr);
    return 0;
}