//package codeforces;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Boyorgirl {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner sc= new Scanner(System.in);
		
	
		String s=sc.nextLine();

//        
		int count=0;
		Set<Character> characterset= new HashSet<Character>();
		for(int i=0;i<s.length();i++)
		{
		   characterset.add(s.charAt(i));  
		}
		
		 
		if(characterset.size()%2==0)
		{
			System.out.println("CHAT WITH HER!");
		}
		
		else
		{
			System.out.println("IGNORE HIM!");
		}
	

   }
		

	}


