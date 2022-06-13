#include<stdio.h>
int main(){
int n,m,i,j,A[100],B[100], *C[100];
//enter array1
printf("Enter size of A Array: \n");
scanf("%d",&n);
printf("Enter elements for A array: \n");
for (i=0;i<n;i++)
{
    scanf("%d",(A+i));
    *(C+i)=A+i;

} 
//enter array2
printf("Enter size of B Array: \n");
scanf("%d",&m);
printf("Enter elements for B array: \n");
for (j=0;j<m;j++)
{
    scanf("%d",(B+j));
    *(C+i+j)=B+j;
}   
for (i=0;i<(n+m);i++){
printf("%d\t",*(C[i]));
}
return 0;
}
