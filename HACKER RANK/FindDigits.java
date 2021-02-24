import java.util.Scanner;

public class FindDigits {
	
      static int Counting(int n)
      {
    	  int temp=n;
    	  int count=0;
  		while(n!=0)
  		{
  			int a=n%10;
  			if(a!=0 && temp%a==0)
  			{
  				count++;
  			}
  			n=n/10;
  			}
  		return count;
  		
      }

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t!=0)
		{
			int n=sc.nextInt();
			int ans=Counting(n);
			System.out.println(ans);
			t--;
		}
	
	}

}
