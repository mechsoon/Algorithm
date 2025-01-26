#include <iostream>
#include <queue>
#include <vector>

int arr[100][100][100];
int vis[100][100][100];
using namespace std;
int dx[]={0,0,0,0,-1,1};
int dy[]={0,0,-1,1,0,0};
int dz[]={1,-1,0,0,0,0};
int dis[100][100][100];
int main(){
    int N,M,H;
    int cnt=0;
    cin>>N>>M>>H;
    queue<vector<int>> q;
    for(int k=0;k<H;k++){
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cin>>arr[k][i][j];
                if(arr[k][i][j]==1){
                    vector<int> vec={k,i,j,0};
                    q.push(vec);
                }
                if(arr[k][i][j]==0){
                cnt++;
            }
            }
        }
    }
    if(!cnt){
        cout<<0;return 0;
    }
    while(!q.empty()){
        // cout<<q.front();
        int h=q.front()[0];
        int x=q.front()[1];
        int y=q.front()[2];
        int dist=q.front()[3];
        // cout<<h<<x<<y<<"\n";
        q.pop();
        vis[h][x][y]=1;
        for(int i=0;i<6;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            int nz=h+dz[i];
            if(nx<0 || nx>=M || ny<0 || ny>=N || nz<0 || nz>=H) continue;
            if(vis[nz][nx][ny]==1 || arr[nz][nx][ny]==1 || arr[nz][nx][ny]==-1) continue;
            vis[nz][nx][ny]=1;
            vector<int> vec={nz,nx,ny,dist+1};
            dis[nz][nx][ny]=dist+1;
            q.push(vec);

        }

    }
    int countzero=0;
    int maxe=-1;
    for(int k=0;k<H;k++){
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(dis[k][i][j]==0 && arr[k][i][j]==0){
                    cout<<-1;
                    return 0;
                }else{
                    maxe=max(maxe,dis[k][i][j]);
                }
            }
    
    }
    cout<<maxe;
}