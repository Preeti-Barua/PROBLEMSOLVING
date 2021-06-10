
public class Shufflethearray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int A[]= {2,5,1,3,4,7};
		int n=A.length/2;     //3 4
		System.out.println(n);
	
      	int[] B =new int[A.length];

		B[0]=A[0];
		for(int i=1;i<B.length;i++)
		
		{
		
		
			if(i%2!=0)
			{
				                                               //2,5,1,3,4,7
				B[i]=A[n++];                                     //2,3,5,4,1,7
			
				
				
				
			}
			else
			{
				B[i]=A[i-1];
			}
			
			
		
			
			
		}
	
		
		for(int i=0;i<A.length;i++)
		{
			System.out.println(A[i]);
		}
		System.out.println("-----------------------------------");
		
		for(int i=0;i<B.length;i++)
		{
			System.out.println(B[i]);
		}
		
		
		

	}
      
		
		

}


 