import java.util.*;

class psp
{
    public static void main(String []args)
    {
        int[] arr = {5,6,1,2,3,4};
        boolean answer = findElementInRotatedSortedArray(arr,6);
        System.out.println("Answer: "+answer);
    }
    private static boolean findElementInRotatedSortedArray(int[] arr,int target)
    {
        return vFindElementInRotatedSortedArray(arr,target,0,arr.length-1);
    }
    private static boolean vFindElementInRotatedSortedArray(int[] arr,int target,int leftIndex,int rightIndex)
    {
        if(leftIndex>rightIndex) return false;
        int middleIndex = leftIndex + ((rightIndex-leftIndex) / 2);
        if(target == arr[middleIndex]) return true;

        if(target>=arr[leftIndex] && target < arr[middleIndex])
        {
            return vFindElementInRotatedSortedArray(arr,target,leftIndex,middleIndex-1);
        }
        else
        {
            return vFindElementInRotatedSortedArray(arr,target,middleIndex+1,rightIndex);
        }
    }
}
