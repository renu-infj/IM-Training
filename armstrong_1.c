#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,sum,num;
    scanf("%d",&num);
    if(num>99&&num<1000)
    {
        a=num%10;
        b=(num/10)/10;
        c=(num/10)%10;
        sum = a*a*a +b*b*b+c*c*c;
        if(sum==num)
        printf("armstrong number");
        else
        printf("not an armstrong number");
    }
}
