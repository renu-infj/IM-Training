#include<stdio.h>
main(){
    int a, b, temp=0;
    //input 2 values
    scanf("%d, %d", &a, &b);
    //using temporary variable swap 2 values
    temp=a;
    a=b;
    b=temp;
    printf("swapped values of a, b: %d, %d", a, b);
}
