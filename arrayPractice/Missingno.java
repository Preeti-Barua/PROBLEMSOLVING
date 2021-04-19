import java.util.Scanner;

public class Missingno
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int A[]=new int[n];
        int i,j=0;
        for(i=0;i<n;i++)
        {
            int element=sc.nextInt();
            A[i]=element;


        }

            for( j=0;j<n-1;j++)
            {
                if(A[j+1]-A[j]>1)
                {

                    break;
                }
            }

            System.out.println(++A[j]);



    
    
}
}