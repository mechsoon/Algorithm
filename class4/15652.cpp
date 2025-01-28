#include <iostream>
using namespace std;
int N,M;
int arr[9];
bool vis[9];

void recur(int n,int k){
    if(k==M){
        for(int i=0;i<M;i++){
            cout<<arr[i]<<" ";
        }cout<<"\n";
        return ;
    }
    for(int i=n;i<=N;i++){
        arr[k]=i;
        recur(i,k+1);
    }
}
int main(){
    cin>>N>>M;
    recur(1,0);
}

// 0 1, 1 1, 1 2, 1 3, 1 4, 
