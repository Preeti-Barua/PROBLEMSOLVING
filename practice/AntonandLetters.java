package codeforces;

//https://codeforces.com/problemset/problem/443/A
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;


public class AntonandLetters {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
	
	
			String s= sc.nextLine();

	      
	        
	       Set<Character> set=new HashSet();
	       int count=0;
	        for(int i=0;i<s.length();i++)
	        {
	        	if(!(s.charAt(i)=='{'||s.charAt(i)=='}'||s.charAt(i)==','||s.charAt(i)==' '))
	        	{
	        		set.add(s.charAt(i));
	        	}
	        	
	        }
	        System.out.println(set.size());
	    
	}

}
