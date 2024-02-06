
public class MergeStirngAlternatively {

	public static String mergeAlternately(String word1, String word2) {
		char[] ch = new char[word1.length() + word2.length()];
		int i = 0, idx1 = 0, idx2 = 0;
		while (i < ch.length) {
			if (idx1 < word1.length()) {
				ch[i++] = word1.charAt(idx1++);
			}

			if (idx2 < word2.length()) {
				ch[i++] = word2.charAt(idx2++);
			}
		}
		return String.valueOf(ch);
	}

	public static void main(String[] args) {

		String s1 = "abc";
		String s2 = "pqr";
		System.out.println(MergeStirngAlternatively.mergeAlternately(s1, s2));

	}
}


