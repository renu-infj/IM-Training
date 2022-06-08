#include<stdio.h>
main(){
    int n;
    //enter a year
    scanf("%d", &n);
    //check if it's a leap year
    if(n%4==0)
    printf("leap yr");
    else
    printf("not  a leap yr");
}
