import java.util.Arrays;

import java.util.Scanner;

public class Anagrams {
	
	
	
    public static void main(String args[])
    {
       Scanner sc= new Scanner(System.in);
       
       
   
      
       
       char []s =sc.nextLine().toCharArray();
       char []s1 =sc.nextLine().toCharArray();
       
   	   sc.close();
       
       s[0]=Character.toLowerCase(s[0]);

 
     
        if (Anagram(s,s1))
            System.out.println("Anagrams");
        else
            System.out.println("Not Anagram");
    }






	static boolean Anagram(char[] str1, char[] str2)
	    {
		 
		   
	        int n1 = str1.length;
	        int n2 = str2.length;
	        
	    
	 
	      
	        if (n1 != n2)
	            return false;
	 
	        Arrays.sort(str1);
	        Arrays.sort(str2);
	 
	 
	        for (int i = 0; i < n1; i++)
	            if (str1[i] != str2[i])
	                return false;
	 
	        return true;
	    }
	 
	   

	}

	




