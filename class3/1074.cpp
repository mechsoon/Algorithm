#include <iostream>
using namespace std;

int N,r,c;

int search(int x,int y,int size){
    if(size==0){
        return 0;
    }

    if(r<x+size/2 && c<y+size/2) return search(x,y,size/2);
    else if(r<x+size/2 && c>=y+size/2) return (size/2*size/2)+search(x,y+size/2,size/2);
    else if(r>=x+size/2 && c<y+size/2) return 2*(size/2*size/2)+search(x+size/2,y,size/2);
    return 3*(size/2*size/2)+search(x+size/2,y+size/2,size/2);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>r>>c;
    int size=1<<N;
    // cout <<size;
    cout<<search(0,0,size);    
}