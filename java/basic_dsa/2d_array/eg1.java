class psp
{

private static void set(int []x,int i,int j,int elem)
{
if(i==j) x[i]=elem;
}

private static int get(int []x,int i,int j)
{
if(i==j) return x[i];
else return 0; // assume x only stores non-zero value
}

public static void main(String []args)
{
int arr[][]={{3,0,0,0,0},{0,7,0,0,0},{0,0,4,0,0},{0,0,0,9,0},{0,0,0,0,6}};
// Assume above is square and diagonal matrix
int []x=new int[arr.length];


for(int i=0;i<arr.length;i++)
{
for(int j=0;j<arr[i].length;j++)
{
set(x,i,j,arr[i][j]);
}
}

// Now let's reterive diagonal matrix

for(int i=0;i<arr.length;i++)
{
for(int j=0;j<arr[i].length;j++)
{
if(i==j) System.out.println(get(x,i,j));
}
}



}
}
