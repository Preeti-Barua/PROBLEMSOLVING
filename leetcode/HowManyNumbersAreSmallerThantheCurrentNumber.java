package leetcode;

import java.util.Scanner;

public class HowManyNumbersAreSmallerThantheCurrentNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int A[]= {8,1,2,2,3};
		
		int B[]= new int[A.length];
		for(int i=0;i<A.length;i++)
		{
			int count=0;
			for(int j=0;j<A.length;j++)
			{
				if(A[i]>A[j])
				{
					count++;
					B[i]=count;
				}
			}
		}
		
		for(int i=0;i<A.length;i++)
		{
			System.out.println(B[i]);
		}
		

	}

}
