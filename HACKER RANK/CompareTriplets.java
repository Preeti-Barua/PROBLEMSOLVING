import java.util.Scanner;

public class CompareTriplets {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		 int A[]=new int[3];
		 int B[]=new int[3];
	
		 for(int i=0;i<3;i++)
		 {
			 A[i]=sc.nextInt();
		 }
		 for(int i=0;i<3;i++)
		 {
			 B[i]=sc.nextInt();
		 }
		 int countA=0,countB=0;
		 for(int i=0;i<3;i++)
		 {
			
			 if(A[i]>B[i])
			 {
				 countA++;
				
			 }
			 else if(A[i]<B[i])
			 {
				 countB++;
			 }
			
		}
		 System.out.print(countA+" ");
		 System.out.print(countB);
		 
	
	}

}
