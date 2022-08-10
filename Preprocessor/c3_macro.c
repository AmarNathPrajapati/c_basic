#include<stdio.h>
// here we are going to declare a marco using define precosser
#define square(r) r*r
#define pi 3.14
//#ifdef -- code will excute inside ifdef if preprocessor is define
//#ifndef-- code will excute inside ifdef if preprocessor is not define
//#pragma-- to issue special commond to program
int main(){
    int r = 10;
    printf("The area of the square is %f",pi*square(r));
    return 0;
}