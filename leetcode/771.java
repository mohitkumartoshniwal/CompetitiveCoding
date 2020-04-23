//https://leetcode.com/problems/jewels-and-stones/

class Solution {
    public int numJewelsInStones(String J, String S) {
        System.out.println(S.replaceAll("[^" + J + "]", ""));
         return S.replaceAll("[^" + J + "]", "").length();
    }
}