
public class UnionandIntersection {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int A[]={1,2,3,4,5};
        int B[]={3,5,8,9};
        int C[]=new int[A.length+B.length];
        //union= 1 2 3 4 5 8 9 
        //Intersection = 3 5
        int i,j=0,k=0;

        for(i=0;i<A.length;i++)
        {
        	C[i]=A[i];
        	System.out.println(i);
        
      
        }
        int r=i+1;
      
       
        for(k=r;k<B.length;k++)
        {
        	C[i]=B[i];
      
        }
        for(j=0;j<A.length+B.length;j++)
        {
        	System.out.println(C[i]);
        }


	}

}
