#include <iostream>

int N;
int ans=0;
bool vis1[50];
bool vis2[50];
bool vis3[50];
using namespace std;

void rec(int k){
    if(k==N){
        ans++;
        return;
    }
    for(int i=0;i<N;i++){
        if(vis1[i] || vis2[i+k] || vis3[k-i+N-1])
            continue;
        vis1[i]=1;
        vis2[i+k]=1;
        vis3[k-i+N-1]=1;
        rec(k+1);
        vis1[i]=0;
        vis2[i+k]=0;
        vis3[k-i+N-1]=0;
    }
}


int main(){
    cin>>N;
    rec(0);
    cout<<ans;
}