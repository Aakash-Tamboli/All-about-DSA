void printArrayWithIndices(int *x,int length)
{
printf("Content of Array: ");
for(int i=0;i<length;i++) printf("%3d ",x[i]);
printf("\n");
printf("Indexes         : ");
for(int i=0;i<length;i++) printf("%3d ",i);
printf("\n");
}

void complexity(char *timeComplexity,char *spaceComplexity)
{
printf("Time: %s\nSpace: %s\n",timeComplexity,spaceComplexity);
}

