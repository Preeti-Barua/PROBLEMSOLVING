import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Snake {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner sc= new Scanner(System.in);
		int a= sc.nextInt();   //3
		
		HashMap<Integer, Integer> mapone = new HashMap<>();
		for(int i=0;i<a;i++)
		{
			int x=sc.nextInt();  //head
			int y=sc.nextInt();  //tail
			
			mapone.put(x, y);
		}
		
		
	    int n=sc.nextInt(); //5
		ArrayList<Integer>css=new ArrayList<Integer>();
		for(int i=0;i<n;i++)
		{
			css.add(sc.nextInt());
		}
		
		int present=0;
		for(int i=0;i<n;i++)
		{
			 present=present+css.get(i);
			 if(mapone.containsKey(present))
			    {
				 	present=mapone.get(present);    
			    }
			
		}
		System.out.println("present is:"+present);

	}

}




//3     int
// 30 5, 67 40, 99 77  //hashmap
//5                    //int
// 6 6 6 6 6            //array list


//5


//take input for total snakes
//store respective head and tail
//dice count      n
// dice outcomes



//int present=0;
//(present==head)
//{
//	present=tail
//}



