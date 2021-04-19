import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

public class DesignerPDRviewer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc= new Scanner(System.in);
		int[] Array=new int[27];
		int[] C= new int[1000];
		for(int i=0;i<=25;i++)
		{
			Array[i]=sc.nextInt();
		}
		
	//	String s=sc.nextLine();
		

		HashMap<Character,Integer>al= new HashMap<Character,Integer>();
		ArrayList<Integer>h=new ArrayList<Integer>();
		
		
			al.put('a',Array[0]);
			al.put('b',Array[1]);
			al.put('c',Array[2]);
			al.put('d',Array[3]);
			al.put('e',Array[4]);
			al.put('f',Array[5]);
			al.put('g',Array[6]);
			al.put('h',Array[7]);
			al.put('i',Array[8]);
			al.put('j',Array[9]);
			al.put('k',Array[10]);
			al.put('l',Array[11]);
			al.put('m',Array[12]);
			al.put('n',Array[13]);
			al.put('o',Array[14]);
			al.put('p',Array[15]);
			al.put('q',Array[16]);
			al.put('r',Array[17]);
			al.put('s',Array[18]);
			al.put('t',Array[19]);
			al.put('u',Array[20]);
			al.put('v',Array[21]);
			al.put('w',Array[22]);
			al.put('x',Array[23]);
			al.put('y',Array[24]);
			al.put('z',Array[25]);
		
		
			String s=sc.next();
			
			char n[]=s.toCharArray();
			int length=s.length();
			for(int i=0;i<length;i++)
			{
				if(al.containsKey(n[i]))
				{
				         h.add(al.get(n[i]));  
				}
			}
		//	System.out.println(h);
			int  l=Collections.max(h);
			int ans=l*length;
			System.out.println(ans);
			
			
			
			
			
			


	}

}
