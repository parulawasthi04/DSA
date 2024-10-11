#include<bits/stdc++.h>
using namespace std;

//Smallest me Max Heap use Karenge
//Largest me Min Heap use krenge

int main(){
    int arr[]={10,20,4,6,18,24,105,118};
    int k=3;
    priority_queue<int>pq;
    for(int i=0;i<8;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top(); 
}