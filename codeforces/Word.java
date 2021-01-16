package codeforces;

//https://codeforces.com/problemset/problem/59/A
import java.util.Scanner;

public class Word {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		
     	String s=sc.nextLine();
     	int countuppercase=0,countlowercase=0;
     	for(int i=0;i<s.length();i++)
     	{
     		if(Character.isUpperCase(s.charAt(i)))
     		{
     			countuppercase++;
     		}
     		else 
     		{
     			countlowercase++;
     		}
     	}
     	sc.close();
     
     	if(countuppercase<countlowercase)
     	{
     		s=s.toLowerCase();
     		System.out.println(s);
     	}
     	else if(countuppercase==countlowercase)
     	{
     		s=s.toLowerCase();
     		System.out.println(s);
     	}
     	else
     	{
     		s=s.toUpperCase();
     		System.out.println(s);
     	}
     	
     	}
	

}


