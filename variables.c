/* C has mainly four type variables
1. local variable- it has block level scope , we can't access any local variable throughtout the defined block.
2.Global variable - we mainly define global variables out of main function and we can access global variables in any block.
note: if global and local variables has same name then in particular block local varibale are accessed by the complier.
3. formal argument - it has same property like local variables.
4. static variables - it preserves its previous value ;
note : static variables always assigned by constant literals.*/

#include <stdio.h>
int x=5;//global variables 
int square(){
    static int b =10;//static variables
    b++;
    return b;

}
int main(){ 
    int a=10;//local varibales
    for (int  i = 0; i < 5; i++)
    {
        int value = square();
        printf("the value is  %d  ",value);   
    }
}
