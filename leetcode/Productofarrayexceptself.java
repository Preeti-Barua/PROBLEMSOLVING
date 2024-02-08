import java.util.ArrayList;

public class Productofarrayexceptself {
	
	private static void productofarrayexceptself(int[] arr) {
		int prod=1;
		
		for(int i=0;i<arr.length;i++)
		{
			prod = prod * arr[i];
		}
		ArrayList<Integer> al = new ArrayList<>();
		for(int i=0;i<arr.length;i++)
		{
			int addElement = prod/arr[i];
			System.out.println(addElement);
			al.add(addElement);
		}
		System.out.println(al);
		
	}
	

	public static void main(String[] args) {
		
		int arr[] = {1,2,3,4};
		Productofarrayexceptself.productofarrayexceptself(arr);

	}

	

}
