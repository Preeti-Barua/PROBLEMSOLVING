package String;

//771. Jewels and Stones
/*You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".*/
import java.util.HashSet;
import java.util.Set;

public class JewelsAndStones {

	public static void main(String[] args) {
		String jewels = "z";
		String stones = "ZZ";
		int count= 0;
		Set<Character> set = new HashSet<Character>();
		for(int j=0;j<jewels.length();j++)
		{
			set.add(jewels.charAt(j));
		}
		
		for(int i=0;i<stones.length();i++)
		{
			if(set.contains(stones.charAt(i)))
			{
				count++;
			}
		}
		System.out.println(count);
	}

}
