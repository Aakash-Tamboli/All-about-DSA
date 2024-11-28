#include<stdio.h>
void printNToOne(int N)
{
    if(N==1)
    {
        printf("%d %d ",N,N);
        return;
    }
    printf("%d ",N);
    printNToOne(N-1);
    printf("%d ",N);
}
int main()
{
    int N=5;
    printNToOne(N);
    printf("\n");
    return 0;
}
