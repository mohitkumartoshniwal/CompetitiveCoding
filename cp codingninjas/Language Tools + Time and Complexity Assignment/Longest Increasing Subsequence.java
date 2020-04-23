/*
You are given with an array of integers that contain numbers in random order. Write a program to find the longest possible sub sequence of consecutive numbers using the numbers from given array.
You need to return the output array which contains consecutive elements. Order of elements in the output is not important.
Best solution takes O(n) time.
If two arrays are of equal length return the array whose index of smallest element comes first.
Input Format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Constraints :
1 <= n <= 10^5
Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
Sample Output 1 :
8 
9 
10 
11 
12
Sample Input 2 :
7
15 13 23 21 19 11 16
Sample Output 2 :
15 
16

*/

import java.util.ArrayList;
import java.util.Scanner;

public class runner {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int sze=s.nextInt();
		int[] arr = new int[sze];
		for(int index = 0;index<sze;index++){
			arr[index]=s.nextInt();
		}
		ArrayList<Integer> ans = solution.longestSubsequence(arr);
		for(int i : ans) {
			System.out.println(i);
		}
	}
}

import java.util.*;

public class solution {

	public static ArrayList<Integer> longestSubsequence(int[] arr){
		// Write your code here
        
        HashMap<Integer,Boolean> hm =new   HashMap<Integer,Boolean>();
        int n=arr.length;
        
        
        for(int i=0;i<n;i++){//making all elem. value to true
            hm.put(arr[i],true);
        }
        
        ArrayList<Integer> al=new ArrayList<Integer>();
        
        int maxCount=1;//initial value for 1 elem. extreme case
        int startNum=arr[0];
        
        for(int i=0;i<n;i++){
            
            int count=0;
            int tempNum =arr[i];
            
            while(hm.get(tempNum)!=null){
                count++;
                tempNum++;
            }
            
            if(count>maxCount){
                maxCount=count;
                startNum=arr[i];
            }
            
        }
        
        al.add(startNum);
        maxCount--;
        while(maxCount!=0){
            startNum++;
            al.add(startNum);
            maxCount--;
        }

        return al;
        
	}
}
