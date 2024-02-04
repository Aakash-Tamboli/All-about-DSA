#include<stdio.h>
int main()
{
int x[9]={12,3,92,-3,76,54,12,93,78};
int flags[9]={0,0,0,0,0,0,0,0,0};
int e,f,prev,noel;
printf("The Sequence is : ");
for(e=0;e<=8;e++) printf("%3d",x[e]);
printf("\n");
printf("The Indexes are : ");
for(e=0;e<=8;e++) printf("%3d",e);

printf("\n\n");

return 0;
}
