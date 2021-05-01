import java.util.Scanner;
public class NextGreatestElement{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int A[]=new int[n];
        int i,j=0;
    
        for (i=0;i<n;i++)
        {
            A[i]=s.nextInt();
        }
        int max=A[n-1];

        for(i=n-2;i>=0;i--)
        {
            if(max>A[i])
            {
                A[i]=max;
            }
            else
            {
                max=A[i];
            }
        }
        for(i=0;i<n;i++)
        {
            System.out.println(A[i]);
        }

    }
}

// 3  4 20 6 15 2 1 7
//20 20 20 15 15 7 7 7
