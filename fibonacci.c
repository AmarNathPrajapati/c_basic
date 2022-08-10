#include<stdio.h>
int fibbonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n>2){
        return fibbonacci(n-1)+fibbonacci(n-2);
    }

}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int value = fibbonacci(n);
    printf("the sum of nth term is : %d",value);
    return 0;
}