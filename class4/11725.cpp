#include <iostream>
#include <vector>
#include <queue>
#define MAX 100001

using namespace std;
int N;
vector<int> vec[MAX];
bool vis[MAX];
int d[MAX];
void dfs(int k){
    vis[k]=1;
    for(int i=0;i<vec[k].size();i++){
        if(!vis[vec[k][i]]){
            d[vec[k][i]]=k;
            dfs(vec[k][i]);
        }
    }
}

void bfs(int k){
    queue<int> q;
    vis[k]=1;
    q.push(k);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int i=0;i<vec[cur].size();i++){
            int next=vec[cur][i];
            if(!vis[next]){
                q.push(next);
                d[next]=cur;
                vis[next]=1;
            }
        }
    }
}

int main(){
    cin>>N;
    int v=N-1;
    while(v--){
        int x,y;
        cin>>x>>y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    bfs(1);
    for(int i=2;i<=N;i++){
        cout<<d[i]<<"\n";
    }
}