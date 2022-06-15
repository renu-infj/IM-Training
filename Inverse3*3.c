#include<stdio.h>
main()
{
    int a[3][3],i,j;
    float det=0;
    printf("enter matrix elemts\n");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix:\n");
    for(i=0; i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d \t", a[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        det+= a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]);
    }
    printf("det: %f", det);
    printf("\ninverse matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%.2f\t", ((a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3])-(a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/det);
        }
        printf("\n");
    }
}
/*
inverse of A is A^-1.
A^-1 = Adj(A).Det(A)
Enter matrix elements ->find det->find adj(A)->find inverse
*/
