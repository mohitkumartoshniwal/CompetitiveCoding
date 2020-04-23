/*
In Little Flowers Public School, there are many students with same first names. You are given a task to find the students with same names. You will be given a string comprising of all the names of students and you have to tell the name and count of those students having same. If all the names are unique, print -1 instead.
Note: We don't have to mention names whose frequency is 1.
Input Format:
The only line of input will have a string ‘str’ with space separated first names of students.
Output Format:
Print the names of students along with their count if they are repeating. If no name is repeating, print -1
Constraints:
1 <= |str| <= 10^5
Time Limit: 1 second
Sample Input 1:
Abhishek harshit Ayush harshit Ayush Iti Deepak Ayush Iti
Sample Output 1:
harshit 2
Ayush 3
Iti 2
Sample Input 2:
Abhishek Harshit Ayush Iti
Sample Output:
-1
*/

import java.util.*; 
import java.lang.*; 
import java.io.*;

public class Main {

	
	public static void main(String[] args) throws IOException{
		/* Your class should be named Main.
 			* Read input as specified in the question.
 			* Print output as specified in the question.
		*/

		// Write your code here

         BufferedReader reader =new BufferedReader(new InputStreamReader(System.in)); 
         
        // Reading data using readLine 
        String input = reader.readLine(); 
             String names[]= input.split(" ");
       //    System.out.println(names.length);
                
            
       //  System.out.println(names);
         HashMap<String,Integer> hm=new  HashMap<String,Integer> ();
        String name;
         int n=names.length;
        
        HashSet<String> hs = new HashSet<>();

        
         for(int i=0;i<names.length;i++){
            
         if(hm.containsKey(names[i])){
             int count=hm.get(names[i]);
             hm.put(names[i],count+1);
            
         }   
             else{
                 hm.put(names[i],1);
                 hs.add(names[i]);
            }
            n++;
             
         }
        
                if(n==hs.size()){
             System.out.println(-1);
              System.exit(0); 
         }
        
        
         for (HashMap.Entry<String,Integer> entry : hm.entrySet()){
             if(entry.getValue()>1)
                  System.out.println( entry.getKey() +" " + entry.getValue()); 
         }  
            
        
        
        
	}

}