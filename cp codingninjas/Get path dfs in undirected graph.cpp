#include <bits/stdc++.h>
using namespace std;



bool getPath(int** edges, int n,int src,bool* visited,int d,vector<int> &path){
  
    visited[src]=true;
    //include current node in path
    
    //add the elem
    path.push_back(src);//before the below if condition
     if(src==d){// this one
       return true;
   }
    for(int i=0;i<n;i++){
        if(src==i){
            continue;//omits the current cycle since already visited
        }
        // if(visited[i]==true)
        //     continue;
        if(edges[src][i]==1){
            if(visited[i]==true)
            continue;//omits the current cycle and goes to next i since already visited 
            
           // if(!visited[i]){
                if(getPath(edges,n,i,visited,d,path)){
                    return true;
               // }
            }
           
        }
        
    }
    path.pop_back();//pop element since path not found
    return false;
}



int main() {
    int n ;
    int e;
    cin>>n>>e;
    int** edges=new int*[n];// dynamic array, creates an array with pointers.
    
    for(int i=0;i<n;i++){
        edges[i]=new int[n];//points to an arrayof size n
        for(int j=0;j<n;j++)
        edges[i][j]=0;//garbage value hence initialized to 0
    }
    for(int i=0;i<e;i++){
       int f,s;
       cin>>f>>s;
       //0->1 1->0 for both
       edges[f][s]=1;
       edges[s][f]=1;
    }
    
    //input source and dest.
    
    int s,d;
    cin>>s>>d;
    
    vector<int> path;
    
    // for keeping track of visited array 
    //if not done then visited nodes will be visited again
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;//garbage value hence initialized to 0
    }
    
   
   
   
    if(getPath(edges,n,s,visited,d,path)){
         for(auto i=path.end()-1;i>=path.begin();i--){
             cout<<*i<<" ";
         }
       
        }
   else{
        
    }
    
    

    delete[] visited;
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete [] edges;
    
    return 0;
}
