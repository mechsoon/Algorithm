#include <iostream>
#include <vector>
#include <queue>


using namespace std;
int arr[100][100];
int vis[100][100];
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n);


    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]) vec[i].push_back(j);
        }
    }

    for(int i=0;i<n;i++){
        queue<int> q;
        int visited[100]={0,};
        q.push(i);
        while(!q.empty()){
            int now=q.front(); q.pop();
            for(auto dir:vec[now]){
                if(visited[dir]!=1){
                    visited[dir]=1;
                    q.push(dir);
                    vis[i][dir]=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vis[i][j]<<" ";
        }
        cout<<"\n";
    }
}