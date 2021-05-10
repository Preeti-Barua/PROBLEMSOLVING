import java.util.Scanner;
public class Subarrayy
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int A[]=new int[n];
        for(int i=0;i<n;i++)
        {
            A[i]=sc.nextInt();
        }

        int q=sc.nextInt();
        int b=sc.nextInt();
        int sum,p=0;

        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<b;j++)

            {
                sum=sum+A[i+j];
                if(sum==q)
                {
                    p++;
                }
            }
        }
        System.out.println(p);
    }
}