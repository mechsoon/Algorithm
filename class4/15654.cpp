#include <iostream>
#include <algorithm>

using namespace std;
int arr[9];
int N,M;
bool vis[999999];
int cnt[9];
void ser(int k){
    if(k==M){
        for(int i=0;i<k;i++){
            cout<<cnt[i]<<" ";
        }cout<<"\n";
        return ;
    }
    for(int i=0;i<N;i++){
        if(!vis[arr[i]]){
            vis[arr[i]]=1;
            cnt[k]=arr[i];
            ser(k+1);
            vis[arr[i]]=0;
        }
    }
}

int main(){
    // int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr,arr+N);
    ser(0);


}