#include <iostream>
using namespace std;

void print(int** edges, int n,int src,bool* visited){
   
    visited[src]=true;
    for(int i=0;i<n;i++){
        if(src==i){
            continue;//omits the current cycle since already visited
        }
        // if(visited[i]==true)
        //     continue;
        if(edges[src][i]==1){
            if(visited[i]==true)
            continue;//omits the current cycle and goes to next i since already visited 
        
            print(edges,n,i,visited);//recursive call
        }
        
    }
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
    // for keeping track of visited array 
    //if not done then visited nodes will be visited again
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;//garbage value hence initialized to 0
    }
   
        print(edges,n,s,visited);
    if(visited[d]==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    

    delete[] visited;
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete [] edges;
    
    return 0;
}
