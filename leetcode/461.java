//https://leetcode.com/problems/hamming-distance/

class Solution {
    public int hammingDistance(int x, int y) {
        return Integer.bitCount(x^y);
        
        //another way
        
        /*
          int d = 0;
        int bitxor = x ^ y;
        
        while (bitxor > 0){
            if (bitxor % 2 == 1){
                d++;
            }
            bitxor = bitxor >> 1;
        }
        
        return d;*/
    }
}