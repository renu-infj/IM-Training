#include<stdio.h>
 
int main()
 
{
    int n1, n2, i, j, *p, *q, a[10], b[10];
    //Enter array1
    printf("Enter the number of elements in array 1 :: ");
    scanf("%d", &n1);
 
    printf("Enter the elements : ");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    //enter array2
    printf("Enter the number of elements in array 2 :: ");
    scanf("%d", &n2);
    printf("Enter the elements : ");
 
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
 
    //merge the arrays using pointers
 
    p=a;
    q=b;
    for(i = 0, j = n1; i < n2; i++, j++)
    {
        *(p+j) = *(q+i);
    }
    printf("The merged array is :: ");
    for(i = 0; i < j; i++)
        printf("%d  ", a[i]);
 
    printf("\n");
    return 0;
}
