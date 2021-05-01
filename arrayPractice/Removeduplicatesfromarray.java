import java.util.Scanner;
public class Removeduplicatesfromarray
{
    public static void main(String args[])
    {
        int A[]=new int[10];
        int temp[]=new int[10];

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(); //taking the length of the array
        for(int i=0;i<n;i++)
        {
            A[i]=sc.nextInt();
        }
        int j=0,i=0;
        for( i=0;i<n-1;i++)
        {
            if(A[i]!=A[i+1])
            {
                temp[j++]=A[i];
            }
        }
        temp[j]=A[i];

        for( i=0;i<n-1;i++)
        {
            System.out.println(temp[i]);
        }

}
}