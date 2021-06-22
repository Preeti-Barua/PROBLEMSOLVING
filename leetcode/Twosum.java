package leetcode;

public class Twosum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int A[]= {3,2,4};
		int target=6;
		
		for(int i=0;i<3;i++)
		{
			for(int j=i+1;j<3;j++)
			{
				if(A[i]+A[j]==target)
				{
					System.out.println(i);
					System.out.println(j);
					break;
				}
			}
			
		}
		

	}

}
