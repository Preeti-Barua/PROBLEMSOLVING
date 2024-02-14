package String;
/*
 * Balanced strings are those that have an equal quantity of 'L' and 'R' characters.

Given a balanced string s, split it into some number of substrings such that:

Each substring is balanced.
Return the maximum number of balanced strings you can obtain.

 

Example 1:

Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.*/

public class SplitAStringinBalancedStrings {

	public static void main(String[] args) {

		String s = "RLRRRLLRLL";
		int count = 0;
		int total = 0;
		for (int i = 0; i < s.length(); i++) {
			if ((s.charAt(i) == 'R')) {
				count++;
			}
			else if (s.charAt(i) == 'L') {
				count--;
			}
			if (count == 0) {
				total++;
			}
		}
		System.out.println(total);

	}

}
