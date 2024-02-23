// find length of string
#include<stdio.h>
int main()
{
char str[]={"God is Great"};
int i;
for(i=0;str[i]!='\0';i++);
printf("%d is length of %s\n",i,str);

return 0;
}
