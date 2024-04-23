class Diagonal
{
private int n;
private int []x;
Diagonal(int n)
{
this.n=n;
this.x=new int[n];
}

public void set(int i,int j,int elem)
{
if(i==j) x[i]=elem;
}

public int get(int i,int j)
{
if(i==j) return x[i];
else return 0;
}

public void display()
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(i==j) System.out.print(get(i,j)+" ");
else System.out.print(0+" ");
}
System.out.println();
}
}
}

class psp
{
public static void main(String []args)
{
Diagonal d=new Diagonal(5);
d.set(0,0,1);
d.set(1,1,2);
d.set(2,2,3);
d.set(3,3,4);
d.set(4,4,5);

d.display();

}
}
