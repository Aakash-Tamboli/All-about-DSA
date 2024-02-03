/*
because eg2.cpp takes time=O(n) and space=O(1) hence we can also optimized,
time using standard formula for n natural no.
*/
#include<stdio.h>
int sum(int n)
{
return n*(n+1)/2;
}

int main()
{
printf("%d\n",sum(5));
return 0;
}

/*
Hence Above solution takes time=O(1) and space=O(1), we can't optimized further.
*/
