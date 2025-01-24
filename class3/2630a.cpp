#include <iostream>

using namespace std;

int arr[128][128];

int num[2];
bool check(int x,int y,int size){
    for(int i=x;i<x+size;i++){
    for(int j=y;j<y+size;j++)
    {
        if(arr[i][j]!=arr[x][y])
            return 0;
    }
    }
    return 1;
}


void rec(int x,int y,int size){
    if(check(x,y,size)){
        // cout<<x<<" "<<y<<"\n";
        if(arr[x][y]==1){
            num[0]++;
        }
        else 
        {num[1]++;}
        return ;
    }
    rec(x,y,size/2);
    rec(x+size/2,y,size/2);
    rec(x,y+size/2,size/2);
    rec(x+size/2,y+size/2,size/2);



}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }}
    rec(0,0,n);
    cout<<num[1]<<"\n"<<num[0];
}