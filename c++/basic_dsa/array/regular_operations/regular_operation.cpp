#include<stdio.h>
#include "common.c"


int x[]={5,4,2,1,3};
int length=sizeof(x)/sizeof(x[0]);

// Complete at revision time you know already



int main()
{

printf("getting element from array: %d at index %d\n",get(2),2);
printf("setting element from array: %d at index %d\n",set(-11),2);
printf("After setting\n");
printf("getting element from array: %d at index %d\n",get(2),2);
printf("Max: %d\n",max());
printf("min: %d\n",min());
printf("avd: %d\n",avg());

return 0;
}
