//https://leetcode.com/problems/self-dividing-numbers/

class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        
        
        List<Integer> l=new ArrayList<Integer>();
        
        for(int i=left;i<=right;i++){
         
            if(checkselfdivide(i)!=-1){
                l.add(i);
            }
        
        }
        
        return l;
    }
    
    static int checkselfdivide(int n){
        if(n<10){
            return 1;
        }
        
        int temp=n;
        while(temp>0){
            int num=temp%10;
            temp/=10;
            if(num==0){
                return -1;
            }
             if(n%num!=0){
                return -1;
            }
        }
        
        return 1;
        
    }
}