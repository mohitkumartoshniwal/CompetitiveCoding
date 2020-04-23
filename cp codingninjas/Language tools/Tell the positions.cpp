/*
In a class there are ‘n’ number of students. They have three different subjects: Data Structures, Algorithm Design & Analysis and Operating Systems. Marks for each subject of all the students are provided to you. You have to tell the position of each student in the class. Print the names of each student according to their position in class. Tie is broken on the basis of their roll numbers. Between two students having same marks, the one with less roll number will have higher rank. The input is provided in order of roll number.
Input Format:
First line will have a single integer ‘n’, denoting the number of students in the class.
Next ‘n’ lines each will have one string denoting the name of student and three space separated integers m1, m2, m3 denoting the marks in three subjects.
Output Format:
Print ‘n’ lines having two values: First, the position of student in the class and second his name.
Constraints:
1 <= n <= 10^5
0 <= m1, m2, m3 <= 100
Sample Input:
3
Mohit 94 85 97
Shubham 93 91 94
Rishabh 95 81 99
Sample Output:
1 Shubham
2 Mohit
3 Rishabh
*/

#include<bits/stdc++.h>
using namespace std;

struct stud{
    string name;
    int roll;
    int total;
};

bool compare(stud stud1,stud stud2){
    if(stud1.total==stud2.total){
        return stud1.roll<stud2.roll;
    }
    return stud1.total>stud2.total;  
}
int main()
{
    int n;
    cin>>n;
     string * names=new string[n];
    int* s1=new int[n];
    int* s2=new int[n];
    int* s3=new int[n];
   
  
    stud* students=new stud[n];
    for(int i=0;i<n;i++){
        cin>>names[i]>>s1[i]>>s2[i]>>s3[i];
        
        students[i].name=names[i];
        students[i].total=s1[i]+s2[i]+s3[i];
        students[i].roll=i;
    }
    
    sort(students,students+n,compare);
    
    for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//              if(students[i].total==students[j].total){
//                  if(students[i].roll<students[j].roll){
//                      cout<<i+1<<" "<<students[i].name<<" "<<students[i].total<<endl;
//                  }
         
             
//      }
//             else{
//                 break;
//             }
//         }
    
        cout<<i+1<<" "<<students[i].name<<endl;
    }
	return 0;
}
