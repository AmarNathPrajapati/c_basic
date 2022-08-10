#include<stdio.h>
#include<string.h>
int main(){
    char ptr[]="My name is Amar Nath";
    puts(ptr);
    memset(ptr,'#',7); // here memeset function replace 7 character of ptr '#'. 
    puts(ptr);
    }