package leetcode;

import java.util.Scanner;

public class NumberofStepstoReduceaNumbertoZero {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		int count=0;
		while(num>0)
		{
			if(num%2==0)
			{
				num/=2;
				count++;
			}
			else
			{
				num-=1;
				count++;
			}
		}
		
		System.out.println(count);

	}

}
