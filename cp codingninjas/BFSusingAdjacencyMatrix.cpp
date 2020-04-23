#include <iostream>
#include <queue>
using namespace std;


void BFSTraversal(int** edges, int n,int src,bool* visited){
    queue<int> pendingVertices;
    
   
    
    pendingVertices.push(src);//add the first element to queue
    visited[src]=true;//mark it as true
    
    while(!pendingVertices.empty()){
        int currentVertex=pendingVertices.front();// gives front elem.
        pendingVertices.pop();
        cout<<currentVertex<<" ";
        for(int i=0;i<n;i++){
            if(currentVertex==i){
                continue;//elem can't have itself as adjacent
            }
            if(edges[currentVertex][i]==1 &&!visited[i]){
            pendingVertices.push(i);//push i
            visited[i]=true;
            }
            
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
      // for keeping track of visited array 
    //if not done then visited nodes will be visited again
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;//garbage value hence initialized to 0
    }
   
    for(int i=0;i<n;i++){
        if(!visited[i])
         BFSTraversal(edges,n,i,visited);
    }
   
    
   delete[] visited;
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete [] edges;
    

  

  return 0;
}


/*input

7
5
0 2
0 3
2 3
1 4
5 6

output
0 2 3 1 4 5 6 
 */
