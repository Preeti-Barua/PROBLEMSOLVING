import java.util.Scanner;
public class YoungPhysicist
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int A[][]=new int[n][3];
        int i;
        int j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<3;j++)
            {
                A[i][j]=sc.nextInt();
                
                 
            }
        }
        int sum=0;
         for(i=0;i<n;i++)
        {
            for(j=0;j<3;j++)
            {
               sum+=A[i][j];

            }
        }
      

        if(sum==0)
        {
            System.out.println("YES");
        }
        else
        {
             System.out.println("NO");
        }
    }
}