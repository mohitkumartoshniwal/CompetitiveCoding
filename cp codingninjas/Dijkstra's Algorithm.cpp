/*
Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
Find and print the shortest distance from the source vertex (i.e. Vertex 0) to all other vertices (including source vertex also) using Dijkstra's Algorithm.
Print the ith vertex number and the distance from source in one line separated by space. Print different vertices in different lines.
Note : Order of vertices in output doesn't matter.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next E lines : Three integers ei, ej and wi, denoting that there exists an edge between vertex ei and vertex ej with weight wi (separated by space)
Output Format :
In different lines, ith vertex number and its distance from source (separated by space)
Constraints :
2 <= V, E <= 10^5
Sample Input 1 :
4 4
0 1 3
0 3 5
1 2 1
2 3 8
Sample Output 1 :
0 0
1 3
2 4
3 5
 */

#include<bits/stdc++.h>

using namespace std;

int getMinimumVertex(bool* visited,int* dist,int n){
    
    //minVertex should be unvisited and its weight should be minimum
    int minVertex=-1;
    
    for(int i=0;i<n;i++){
        //unvisited and (skip minVertex as -1 or weight of i< weight of minVertex)
        if(!visited[i] && ((minVertex==-1)||dist[minVertex]>dist[i])){
            
            minVertex=i;//update minVertex
    }
    }
    return minVertex;
}

void dijkstra(int** edges, int n){
    
    bool* visited=new bool[n]();// initialize with false    ()
  
    int* dist= new int[n];//initial dist for all vertices
    
    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;//initialized to infinity according to algorithm
    }
    
    dist[0]=0;//initialized to minimum dist
    
    
    for(int i=0;i<n-1;i++){//n-1 times since ? vertex loop is left out
        
        //so first we find the minimum vertex AFTER 0 since we have initialized
        //0's dist minimum compared to its other vertices and it is also unvisited
        
        int minVertex=getMinimumVertex(visited,dist,n);
        visited[minVertex]=true;
        
        //Expore all neighbours of minVertex and update their dist 
        for(int j=0;j<n;j++){
           //Below logic has to be changed if priority queue is used for getting minimum vertex
         
         //to find neighbours just check their dist in edges pointer for minVertex and
            if(edges[minVertex][j]!=0 && !visited[j]){//neighbours should be unvisited
            int curD=dist[minVertex]+edges[minVertex][j];
            //current dist= distance OF/TILL minimum vertex + weight of edge from minVertex to j. 
                if(dist[j]>curD){//update dist[j] if it is greater than curD.
                dist[j]=curD;
                    
                }
                }
            }
        }
        
        for(int i=0;i<n;i++){
        
                cout<<i<<" "<<dist[i]<<endl;

        }
    
    
    delete [] visited;
    delete [] dist;
   
    
    }
    
  
    
 int main(){
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
       int f,s,w;
       cin>>f>>s>>w;
       //0->1 1->0 for both
       edges[f][s]=w;
       edges[s][f]=w;
    }
    cout<<endl;
    dijkstra(edges,n);
    
    for(int i=0;i<n;i++){
        delete[] edges[i];
    }
    delete []edges;
    
 
 }
 
/*
Overall Time complexity is O(V^2)

1. It can be optimized if we use priority queue for getting minimum vertex O(logn)
2. And by using adjacency list to store and check neighbours of a particuar vertex 
   instead of searching all the vertice which is done in the code.

   Logic of one part of code has to be changed if priority queue is used

Hence if the input graph is represented using adjacency list, then the time complexity
 of Prim’s algorithm can be reduced to O(E log V) with the help of binary heap.

Check below link : 
 https://www.geeksforgeeks.org/prims-mst-for-adjacency-list-representation-greedy-algo-6/

 */ 