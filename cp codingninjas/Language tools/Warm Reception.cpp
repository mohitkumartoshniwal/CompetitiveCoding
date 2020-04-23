/*
There is only one beauty parlour in the town CodingNinjasLand. The receptionist at beauty parlour is flooded with appointment requests because “Hakori” festival is round the corner and everyone wants to look good on it.
S/he needs your help. The problem is they don’t have chairs in reception. They are ordering chairs from NinjasKart. They don’t want to order more than required. You have to tell minimum number of chairs required such that none of the customer has to stand.
Input Format :
First line contains number of customers that will come. Second line contains N space separated integers which represent arrival timings of the customer. Third line contains N space separated integers which represent departure timings of the customer. Arrival and departure timings are given in 24 hour clock.
Constraints:
1<= N <= 100
Arrival and departure timings lie in the range [0000 to 2359]
Time Limit: 1 second
Output Format :
You have to print the minimum number of chairs required such that no customer has to wait standing. 
Sample Test Cases:
Sample Input 1 :
5
900 1000 1100 1030 1600
1900 1300 1130 1130 1800
Sample Output 1:
4
Explanation:
4 because at 1100 hours, we will have maximum number of customers at the shop, throughout the day. And that maximum number is 4. 
*/

import java.util.*;

public class Main {

	
	public static void main(String[] args) {
		// Write your code here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        
        int[] arrivals=new int[n];
        int[] departs=new int[n];
        
        for(int i=0;i<n;i++){
            arrivals[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            departs[i]=sc.nextInt();
        }
        
        Arrays.sort(arrivals);
        Arrays.sort(departs);
        
       
        int max=Integer.MIN_VALUE;
        int count=0;
         int i=0,j=0;
        while(i < arrivals.length && j<departs.length){
            if(arrivals[i]<departs[j]){
                count++;
                i++;
            }
        else{
            count--;
            j++;
        }
        if(count>max){
            max=count;
        }
        
       

	}
         System.out.println(max);

}
}