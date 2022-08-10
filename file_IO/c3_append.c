#include<stdio.h>
// file ko close karana aapki jimmedari hai.
// append ka matlab hota hai jod dena
int main(){
    FILE*ptr = NULL;
    ptr = fopen("chandan.txt","a");
    char string[50] = " my name is chandan. ";
    fprintf(ptr,"%s",string);
    fclose(ptr);
    return 0;
}