/*
Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
Find and print the Minimum Spanning Tree (MST) using Kruskal's algorithm.
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
 */

// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


class Edge{//defined for edge type
    public://?
        int src;
        int des;
        int wgt;
};

int getParent(int* parent,int v){//gives the topmost parent of vertex v
    //if suppose 2 has topmost parent 1 
    if(parent[v]==v){
        return v;//it will retuen 1 as topmost element 
    }
    return getParent(parent,parent[v]);//so recursively send 2nd parameter as 1
}


bool compare(Edge e1,Edge e2){//Comparartor
    return e1.wgt<e2.wgt;
}

Edge* kruskal(Edge* edges,int n,int e){
    
    Edge* output=new Edge[n-1]; //for minimum spanning tree with edges n-1
    
    sort(edges,edges+e,compare);// to make the edges sorted based on minimum weights
    
    int* parent=new int[n];//stores parent for all vertices
	for(int i=0;i<n;i++){
	    parent[i]=i;//initialized to its own value
	}
	
	int count=0,i=0;
	while(count<n-1){//total n-1 edges for m.s.t.
	   
	   
	   Edge currentEdge=edges[i];//i is used for edges in input graph
	   
	   int srcParent=getParent(parent,currentEdge.src);
	   int desParent=getParent(parent,currentEdge.des);
	  // int wgt=getParent(parent,currentEdge.wgt);no need since already sorted on minimum 
	   
        
        //Check whether  currentEdge's vertices are in different connected components hence
        //check their topmost parent
	   if(srcParent!=desParent)
       {
	       output[count]=currentEdge;//count is used for edges in m.s.t.
	       count++;
	       parent[srcParent]=desParent;//changing the topmost parent of the source to desParent
	   }
	   
	   
	    i++;
	}
    
    return output;
}
// Driver Code 
int main() 
{

	int n,e;//n is same as v
	cin>>n>>e;
	
	Edge* edges=new Edge[e];
	
	for(int i=0;i<e;i++){// e since e is equal to no. of edges
	    int s,d,w;
	    cin>>s>>d>>w;
	  
	    edges[i].src=s;
	    edges[i].des=d;
	    edges[i].wgt=w;
	}

	Edge* output=kruskal(edges,n,e);
	
	for(int i=0;i<n-1;i++){//n-1 since n-1 is equal to no. of edges in m.s.t
	    if(output[i].src<output[i].des){
	        cout<<output[i].src<<" "<<output[i].des<<" "<<output[i].wgt<<endl;
	    }
	    else {
	        cout<<output[i].des<<" "<<output[i].src<<" "<<output[i].wgt<<endl;
	    }
	}
	return 0; 
} 

/*
Time complexity

1. Taking input O(E)
2. Sorting the edges takes O(ElogE)
3. Pick V-1 edges from E edges and form M.S.T   O(E)(since in worst case all edges might be traversed)
		for each edge union find algorithm is used which takes 	O(V)(since in worst case all vertices might be traversed like in left or right skew tree)
   so total it takes O(E*V)


Hence total tc is O(ElogE +E*V)

it can v=be further reduced to  O(ElogE +E*logV) by using Union by Rank and Path Compression instead of union find. 
https://www.geeksforgeeks.org/union-find-algorithm-set-2-union-by-rank/
 */