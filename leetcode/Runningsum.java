
public class Runningsum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int A[]= {1,2,3,4};
		
		for(int i=1;i<A.length;i++)
		{
			A[i]=A[i]+A[i-1];
		}
		
		for(int i=0;i<A.length;i++)
		{
			System.out.println(A[i]);
		}

	}

}
