/*
Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.
Input format :
String S
Output format :
Output String
Constraints :
1 <= Length of S <= 50000
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde
*/

import java.util.*;
public class solution {

	public static String uniqueChar(String string){
		// Write your code here
       char[] chars = string.toCharArray();
Set<Character> charSet = new LinkedHashSet<Character>();//linkedhashset will keep the order maintained
for (char c : chars) {
    charSet.add(c);
}

StringBuilder sb = new StringBuilder();
for (Character character : charSet) {
    sb.append(character);
}

        
        return sb.toString();
	}
}
