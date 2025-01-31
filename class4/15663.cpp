#include <iostream>
#include <algorithm>

using namespace std;
int N,M;
int arr[8];
bool vis[10001];
int cnt[8];
void rec(int k){
    if(k==M){
        for(int i=0;i<k;i++){
            cout<<cnt[i]<<" ";
        }cout<<"\n";
        return;
    }
    int prev=-1;
    for(int i=0;i<N;i++){
        int temp=arr[i];
        if(!vis[temp] && prev!=temp){
            cnt[k]=temp;
            prev=temp;
            vis[i]=1;
            rec(k+1);
            vis[i]=0;
        }
    }
}

int main(){
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr,arr+N);
    rec(0);
}