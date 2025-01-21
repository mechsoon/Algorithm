#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int cnt_blue=0;
int cnt_white=0;
vector<vector<int>> vec(1000,vector<int>(1000,0));

void search(int x,int y,int size){
    int color=vec[x][y];
    bool flag=0;
    for(int i=x;i<x+size;i++){
        for(int j=y;j<y+size;j++){
            if(vec[i][j]!=color){
                flag=1;
            }
        }
    }
    if(flag){
        search(x,y,size/2);
        search(x,y+size/2,size/2);
        search(x+size/2,y,size/2);
        search(x+size/2,y+size/2,size/2);
    }else{
        if(color==1){
            cnt_blue++;return;
        }else{
            cnt_white++;return;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>vec[i][j];
        }
    }
    search(0,0,N);
    cout<<cnt_white<<"\n";
    cout<<cnt_blue<<"\n";

}