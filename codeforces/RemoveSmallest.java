import java.util.Scanner;
public class RemoveSmallest{

    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int css=0;css<t;css++)
        {
            int len=sc.nextInt();
            int A[]=new int[len];
            for(int i=0;i<len;i++)
            {
                int element=sc.nextInt();
                A[i]=element;
            	//A[i]=sc.nextInt();
            }
            
            boolean greaterthanone=false;
         
            int count=0;
            for(int i=0;i<len-1;i++)
            {
            	
                 if(Math.abs(A[i]-A[i+1])>1)
                 {
                	 greaterthanone=true;
                 
                     break;
                 }

               
            }
            
            if(greaterthanone)
            {
            	System.out.println("NO");
            }
            else
            {
            	System.out.println("YES");
            }
        }
    }


}
