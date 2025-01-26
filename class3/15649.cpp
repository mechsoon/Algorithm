#include <iostream>
using namespace std;

int vis[8];
int arr[8];
int N,M;


void back(int count){
    if(count==M){
        for(int i=0;i<M;i++){
            cout<<arr[i]<<" ";
        }cout<<"\n";
        return;
    }
    for(int i=1;i<=N;i++){
        if(!vis[i]){
            vis[i]=1;
            arr[count]=i;
            back(count+1);
            vis[i]=0;
        }
    }



}
int main(){
    cin>>N>>M;
    back(0);

}