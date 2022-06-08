#include<stdio.h>
main()
{
    int num;
    //input an integer value for num variable
    scanf("%d", &num);
    //pre-increment operation
    printf("%d\n",++num);
    //post-increment operation
    printf("%d\n",num++);
    //post-decrement operator
    printf("%d\n",num--);
    printf("%d\n",num);
    //pre-decrement operator
    printf("%d\n",--num);
}
