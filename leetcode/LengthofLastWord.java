
public class LengthofLastWord {

	
	public static int checkCountTheLastString(String haystack) {
		int count=0;
	    haystack = haystack.trim();
	    for(int i=haystack.length()-1;i>0;i--)
		{
			
			if(haystack.charAt(i) == ' ')
			{
				return count;
			}
			else
			{
				count++;
			}
			
		}
		return count;
		
		
		
	}
	public static void main(String[] args) {
		
		String sentence="  luffy is still joyboy  ";
		System.out.println(LengthofLastWord.checkCountTheLastString(sentence));;

	
		
	}

}
