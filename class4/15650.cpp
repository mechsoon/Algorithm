#include <iostream>

int N,M;

using namespace std;
int arr[9];
bool vis[9];

void recur(int n,int k){
    if(k==M){
        for(int i=0;i<M;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return ;
    }
    for(int j=n;j<=N;j++){
        if(!vis[j]){
            vis[j]=1;
            arr[k]=j;
            recur(j+1,k+1);
            vis[j]=0;
        }
    }
}

int main(){

    cin>>N>>M;
    recur(1,0);
}