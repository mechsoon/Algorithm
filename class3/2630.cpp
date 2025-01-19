#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector<int> vec[1001];
int vis[1001];
int M,N;

void bfs(int start){
    queue<int> q;
    q.push(start);
    vis[start]=1;
    while(!q.empty()){
        int now=q.front();
        q.pop();
        for(int i=0;i<vec[now].size();i++){
            if(vis[vec[now][i]]==0){
                vis[vec[now][i]]=1;
                q.push(vec[now][i]);
            }
        }
    }
}

int main(){
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    int count=0;
    for(int i=1;i<=N;i++){
        if(vis[i]==0){
            bfs(i);
            count++;

        } 
    }
    cout<<count;


}