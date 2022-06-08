#include<stdio.h>
main()
{
int fnum, snum;
printf("enter 2 numbers:");
scanf("%d %d", &fnum, &snum);
fnum = fnum-snum;
snum=fnum+snum;
fnum=snum-fnum;
printf("\n fnum after swap = %d\n", fnum);
printf("\n snum after swap = %d\n", snum);
}
