// Count Words
#include<stdio.h>
int main()
{
char str[]={"A Boy"};
int word=0;
for(int i=0;str[i]!='\0';i++)
{
if(i==0 && str[i]==' ') word++;
else if(str[i]==' ' && str[i-1]!=' ') word++;
}
printf("%d\n",word+1);

return 0;
}
