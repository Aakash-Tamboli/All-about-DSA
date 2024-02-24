/* validate string:
	Criteria: If string contains only lowercase,uppercase and numbers then it is valid otherwise invalid.
*/
#include<stdio.h>
int valid(const char *str)
{
for(int i=0;i<str[i]!='\0';i++)
{
if(!(str[i]>='A' && str[i]<='Z') && !(str[i]>='a' && str[i]<='z') && !(str[i]>='1' && str[i]<='9'))
{
return 0;
}
}
return 1;
}
int main()
{
char name[]={"Anil321"};
if(valid(name)==0) printf("Unvalid\n");
else printf("Valid\n");
return 0;
}
