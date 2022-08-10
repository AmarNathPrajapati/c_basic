#include<stdio.h>

int main(){
    char info[100];
    char dept[] = "HR";
    int emp = 75;
    sprintf(info,"the %s dept has %d employee.",dept,emp);
    printf("%s",info);




    char info2[]="UP Jaunpur 5000000";
    char state[50];
    char district[50];
    int population;
    sscanf(info2,"%s %s %d",state , district, &population);
    printf("population of %s in %s is %d",district,state,population);
    return 0;
}