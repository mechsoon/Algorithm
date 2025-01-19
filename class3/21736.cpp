#include <iostream>
#include <string>
#include <vector>
#include <queue>
#define X first
#define Y second

using namespace std;
int M,N;
vector<string> vec;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

int main(){
    cin>>M>>N;
    vec.resize(M);
    for(int i=0;i<M;i++){
        cin>>vec[i];
    }
    int x=-1,y=-1;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(vec[i][j]=='I'){
                x=i;
                y=j;
                break;
            }
        }
    }
    if(x==-1 || y==-1){
        return 0;
    }
    vector<vector<int>> vis(M,vector<int>(N,0));
    queue<pair<int,int>> q;
    q.push({x,y});
    int count=0;
    vis[x][y]=1;
    while(!q.empty()){
        auto cur=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.X+dx[i];
            int ny=cur.Y+dy[i];
            
            if(nx<0 || nx>=M || ny<0 || ny>=N) continue;
            if(vis[nx][ny]==1) continue;
            if(vec[nx][ny]=='X') continue;
            vis[nx][ny]=1;
            if(vec[nx][ny]=='P'){
                count++;
            }
            q.push({nx,ny});

        }
    }
    if(count>0){
        cout<<count;
    }else{
        cout<<"TT";
    }
}