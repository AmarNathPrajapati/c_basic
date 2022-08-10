#include<stdio.h>
// here we are going to use predefined macroes
int main(){
    printf("The file name is %s\n",__FILE__);
    printf("Today's date is %s\n",__DATE__);
    printf("NOW TIME is %s\n",__TIME__);
    printf("LINE NO. is %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);
    return 0;
}