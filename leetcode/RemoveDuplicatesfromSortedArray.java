package leetcode;

public class RemoveDuplicatesfromSortedArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int Array[]= {1,1,2};
		int index=1;
		for(int i=0;i<Array.length-1;i++)
		{
			if(Array[i]!=Array[i+1])
				{
					Array[index++]=Array[i+1];
			     }
			}
			System.out.println(index); } }



//https://leetcode.com/problems/remove-duplicates-from-sorted-array/