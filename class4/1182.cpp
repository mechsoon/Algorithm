#include <iostream>

int vis[20];
int arr[20];
using namespace std;

int N,S;
int ans=0;
int temp=0;
int dis[20];
int cnt=0;
void rec(int k){
    if(k==N){
        temp=0;
        cout<<"\n";
        dis[cnt++]=1;
        return;
    }
    for(int i=0;i<N;i++){
        if(!vis[i] && !dis[i]){
            vis[i]=1;
            temp+=arr[i];
            cout<<arr[i]<<" ";
            if(temp==S){
                ans++;
            }
            rec(k+1);
            vis[i]=0;
        }
    }

}



int main(){
    cin>>N>>S;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    rec(0);
    cout<<ans;
}


// /   rec(num+1,sum)                        r
// /   rec(num+1,sum+arr[num]) 