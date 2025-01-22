#include <iostream>
#include <queue>


int vis[400000];
#define X first
#define Y second
using namespace std;
int N,K;

void bfs(int n){
    queue<pair<int,int>> q;
    q.push({0,n});
    // cost:0
    vis[n]=1;
    while(!q.empty()){
        int cost=q.front().X;
        int now=q.front().Y;
        q.pop();
        if(now==K){
            cout<<cost;
            break;
        }
        if((now-1)>=0 && vis[now-1]==0) 
        {
            vis[now-1]=1;
            q.push({cost+1,now-1});
        }
        if((now+1)<=100000 && vis[now+1]==0) 
        {
            vis[now+1]=1;
            q.push({cost+1,now+1});
            
        }

        if((now*2)<=100000 &&vis[now*2]==0) 
        {
        vis[now*2]=1;
        q.push({cost+1,now*2});
        
        }


    }
}


int main(){
    cin>>N>>K;

    bfs(N);
}