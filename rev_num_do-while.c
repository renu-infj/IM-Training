#include<stdio.h>
main()
{
    int num, rev =0, rem = 0;
    //enter a number to be reversed
    scanf("%d", &num);
    do{
        rem = num%10;
        num=num/10;
        rev=rev*10+rem;
    }while(num>0);
    //print receersed number
    printf("%d", rev);
}
