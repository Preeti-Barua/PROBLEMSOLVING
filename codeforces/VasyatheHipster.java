package codeforces;
//https://codeforces.com/problemset/problem/581/A
import java.util.Scanner;
import java.lang.Math;

public class VasyatheHipster {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	       Scanner sc=new  Scanner(System.in);
           int a=sc.nextInt();
           int b=sc.nextInt();
          
          int countdiff = 0;
          int countsame=0;
          if(a>b)
          {
              countdiff=b;
          }
          else
          {
        	  countdiff=a;
          }
          
          int c=b-a;
          c=Math.abs(c);
         
           System.out.println(countdiff);
          if(c==1)
          {
                  System.out.println(0); 
          }
          else if(c==2)
          {
        	  System.out.println(1);
          }
          else
          {
            int  k=c/2;
             
             System.out.println(k);
             
          }

	}

}
