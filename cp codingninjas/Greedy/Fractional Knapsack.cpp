/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<bits/stdc++.h>

using namespace std;

struct Item{
    int value,weight;
};

bool compare(struct Item a,struct Item b){
    double valu1=(double)a.value/a.weight;
    double valu2=(double)b.value/b.weight;
    
    return valu1>valu2;
}

double fknapsack(struct Item arr[],int W, int size){
    
    sort(arr,arr+size,compare);
    
    int curW=0;
    double fvalue=0;
    
    for(int i=0;i<size;i++){
        if(curW+arr[i].weight<=W){
            curW+=arr[i].weight;
            fvalue+=arr[i].value;
        }
        else{//complete weight can't be taken so fractional weight
            int rWeight=W-curW;//remaining weight after removing the current weight
            //eg let w=40 and already filled curw is 35, but now an item with high value has weight of 40,so 
            //fraction of it can be taken i.e. 5/40th part
            fvalue+=arr[i].value*((double)rWeight/arr[i].weight);//(5/40)* value per unit weight
            break;//since the knapsack is full
        }
    }
    return fvalue;
    
}


int main()
{
   int W=70;
   Item arr[]={{60,20},{70,15},{80,40}};
   cout<<fknapsack(arr,W,3);

    return 0;
}
