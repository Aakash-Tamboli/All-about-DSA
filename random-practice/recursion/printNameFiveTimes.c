#include<stdio.h>
/*
void printNameFiveTimes(const char *str,int counter,int upperBound)
{
if(counter>=upperBound)
{
return;
}
printf("%s\n",str);
printNameFiveTimes(str,counter+1,upperBound);
}*/

void printNameFiveTimes(const char *str,int counter,int upperBound)
{
if(counter<=upperBound)
{
printf("%s\n",str);
printNameFiveTimes(str,counter+1,upperBound);
}
}

int main()
{
printNameFiveTimes("God is Great",0,4);
return 0;
}
