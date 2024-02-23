// changing case of given string
#include<stdio.h>
int main()
{
char str[]={"WELCOME"};

for(int i=0;str[i]!='\0';i++)
{
if(str[i]>='A' && str[i]<='Z') str[i]=str[i]+32;
else if(str[i]>='a' && str[i]<='z') str[i]=str[i]-32;
}
printf("%s\n",str);
return 0;
}
