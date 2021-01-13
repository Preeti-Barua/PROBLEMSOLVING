import java.util.HashMap;
import java.util.Scanner;

public class Phone {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		HashMap<Character,Integer> m= new HashMap<Character,Integer>();
        m.put('a', 1);
        m.put('b', 2);
        m.put('c', 3);
        m.put('d', 1);
        m.put('e', 2);
        m.put('f', 3);
        m.put('g', 1);
        m.put('h', 2);
        m.put('i', 3);
        m.put('j', 1);
        m.put('k', 2);
        m.put('l', 3);
        m.put('m', 1);
        m.put('n', 2);
        m.put('o', 3);
        m.put('p', 1);
        m.put('q', 2);
        m.put('r', 3);
        m.put('s', 4);
        m.put('t', 1);
        m.put('u', 2);
        m.put('v', 3);
        m.put('w', 1);
        m.put('x', 2);
        m.put('y', 3);
        m.put('z', 4);
        m.put(' ', 1);
        
        
        Scanner sc = new Scanner(System.in); 
        String input=sc.nextLine();
        int count=0,n=0;
        for(int i=0;i<input.length();i++)
        {
        	
        	if(m.containsKey(input.charAt(i)))
        	{
        		 
        		
        		count=count+m.get(input.charAt(i));       
        		 
        		   
        	}
        }
               System.out.println(count);
       


	}

}
