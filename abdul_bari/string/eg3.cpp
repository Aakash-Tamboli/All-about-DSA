// counting vowel and consonent
#include<stdio.h>
int main()
{
char str[]={"How are You"};
int i,vCount,cCount;
vCount=0;
cCount=0;
for(int i=0;str[i]!='\0';i++)
{
if(str[i]=='a' ||
str[i]=='e' ||
str[i]=='i' ||
str[i]=='o' ||
str[i]=='u')
{
vCount++;
}
else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
{
cCount++;
}
}
printf("%s\nVowel: %d\nConsonent: %d\n",str,vCount,cCount);

return 0;
}
