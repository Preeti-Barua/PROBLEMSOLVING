package codeforces;

import java.util.HashMap;
import java.util.Scanner;
//https://codeforces.com/problemset/problem/785/A

public class AntonAndPolyhedrons {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		
		
		HashMap<String,Integer>H=new HashMap<String,Integer>();
		H.put("Tetrahedron", 4);
		H.put("Cube", 6);
		H.put("Octahedron", 8);
		H.put("Dodecahedron", 12);
		H.put("Icosahedron", 20);
		
		int sum=0, k=0;
		for(int i=0;i<n;i++)
		{
			String s=sc.next();
			if(H.containsKey(s))
			{
				 k=H.get(s);
				sum=sum+k;
			}
		}
		System.out.println(sum);
		
	}

}
