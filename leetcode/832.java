//https://leetcode.com/problems/flipping-an-image/

class Solution {
    
    /*
    Explanation:

    reverse every row.
    toggle every value.

In Java, I did both steps together:
Compare the i th and n - i - 1 th in a row.
The "trick" is that if the values are not the same,
but you swap and flip, nothing will change.
So if they are same, we toggle both, otherwise we do nothing.

*/
    public int[][] flipAndInvertImage(int[][] A) {
        
       
        for(int i=0;i<A.length;i++){
            for(int j=0;j*2<A[i].length;j++)
                if(A[i][j]==A[i][A[i].length-1-j]){
                    A[i][j]=A[i][A[i].length-1-j] ^=1;
                }
        }
         return A;
    }
   
}