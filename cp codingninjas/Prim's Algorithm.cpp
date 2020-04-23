/*

Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
Find and print the Minimum Spanning Tree (MST) using Prim's algorithm.
For printing MST follow the steps -
1. In one line, print an edge which is part of MST in the format -
v1 v2 w
where, v1 and v2 are the vertices of the edge which is included in MST and whose weight is w. And v1 <= v2 i.e. print the smaller vertex first while printing an edge.
2. Print V-1 edges in above format in different lines.
Note : Order of different edges doesn't matter.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next E lines : Three integers ei, ej and wi, denoting that there exists an edge between vertex ei and vertex ej with weight wi (separated by space)
Output Format :
MST
Constraints :
2 <= V, E <= 10^5
Sample Input 1 :
4 4
0 1 3
0 3 5
1 2 1
2 3 8
Sample Output 1 :
1 2 1
0 1 3
0 3 5

Prim's algorithm is a greedy technique. Because we check for local mimnimum vertex in each iteration. 

 */



#include<bits/stdc++.h>

using namespace std;

int getMinimumVertex(bool* visited,int* weight,int n){//O(n)
    
    //minVertex should be unvisited and its weight should be minimum
    int minVertex=-1;
    
    for(int i=0;i<n;i++){
        //unvisited and (skip minVertex as -1 or weight of i< weight of minVertex)
        if(!visited[i] && ((minVertex==-1)||weight[minVertex]>weight[i])){
            
            minVertex=i;//update minVertex
    }
    }
    return minVertex;
}

void prims(int** edges, int n){//O(n^2)
    
    bool* visited=new bool[n]();// initialize with false    ()
    int* parent=new int[n];//it stores the parent of other vertices which will be later displayed in m.s.t 
    int* weight= new int[n];//initial weights for all vertices

    
    
    for(int i=0;i<n;i++){//O(n)
        weight[i]=INT_MAX;//initialized to infinity according to algorithm
    }
    parent[0]=-1;//since it does not have a parent
    weight[0]=0;//initialized to minimum weight
    
    //O(n-1) or O(n) for  below 
    for(int i=0;i<n-1;i++){//n-1 times since ? vertex loop is left out
        
        //so first we find the minimum vertex AFTER 0 since we have initialized
        //0's weight minimum compared to its other vertices and it is also unvisited
        
        int minVertex=getMinimumVertex(visited,weight,n);
        visited[minVertex]=true;
        
        //Expore all neighbours of minVertex and update their weight and parent accordingly.
        for(int j=0;j<n;j++){
            
         //Below logic has to be changed if priority queue is used for getting minimum vertex
         
         //to find neighbours just check their weights in edges pointer for minVertex and
            if(edges[minVertex][j]!=0 && !visited[j]){//neighbours should be unvisited
                if(weight[j]>edges[minVertex][j]){
                    weight[j]=edges[minVertex][j];//updating the weight of edge j
                    parent[j]=minVertex;//updating the parent of j
                }
                }
            }
        }
        
        for(int i=1;i<n;i++){//i=1 since we include its parent below
            if(parent[i]<i){
                cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
            }
            else{
                 cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
            }
        }
    
    delete [] parent;    
    delete [] visited;
    delete [] weight;
   
    
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
   
    prims(edges,n);
    
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