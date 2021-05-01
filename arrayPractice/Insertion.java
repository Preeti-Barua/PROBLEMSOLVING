import java.util.Scanner;
public class Insertion
{
    public static void main(String args[])
    {
        
         int A[]=new int[50];
         
        Scanner sc=new Scanner(System.in);
        
        for(int j=0;j<5;j++)
        {
            A[j]=sc.nextInt();
        }
        int pos=sc.nextInt();
        int num=sc.nextInt();


        for(int i=5-2;i>=pos;i--)
        {
            A[i+1]=A[i];
        }
        A[pos-1]=num;
          for(int j=0;j<5;j++)
        {
            System.out.println(A[j]);
        }
        
        

    }
}