import java.util.Scanner;
import java.util.Arrays;
public class RemoveDuplicates
{
    public static void main(String args[])
    {
        

        Scanner sc=new Scanner(System.in);
        int i=0,j=0;
        int n=sc.nextInt();
        int A[]=new int[n];
        
        for(i=0;i<n;i++)
        {
            int element=sc.nextInt();
            A[i]=element;

        }


        Arrays.sort(A);

        //1 22 3 6 8 

         for(i=0;i<n-2;i++)
          {
              if(A[i]==A[i+1])
              {
                  A[i+1]=A[i+2];
              }
          }

          for(i=0;i<n-2;i++)
          {
              System.out.println(A[i]);
           }


        



    }
}