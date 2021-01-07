//package codeforces;
//https://codeforces.com/problemset/problem/112/A
import java.util.Scanner;

public class PetyaAnsString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner sc=new Scanner(System.in);
		String one=sc.next();        //first string        
		one=one.toLowerCase();
		String two=sc.next();        //second string
		two=two.toLowerCase();
		
		
		
		int result= one.compareTo(two);
		
		if(result<0)
		{
			System.out.println("-1");
		}
		else if(result>0)
		{
			System.out.println("1");
		}
		else
		{
			System.out.println("0");
		
			 }
			
		}
		

	}


