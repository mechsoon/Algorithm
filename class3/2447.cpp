#include <iostream>
#include <vector>

using namespace std;
char arr[3000][3000];
void paint(int x,int y,int size){
    for(int i=x;i<x+size;i++)
    {
        for(int j=y;j<y+size;j++){
            if(i==x || i==x+size-1){
                arr[i][j]='*';
            }else{
                if(j==y || j==y+size-1){
                    arr[i][j]='*';}
                    
                // }else{
                // cout<<" ";}
            }
        }
    }

}

void sear(int x,int y,int size){
    if(size<3){

        return;
    }
    paint(x,y,size);
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        if(i==1 && j==1)
            continue;
        sear(x+i*size/3,y+j*size/3,size/3);
    }


}

int main(){
    int N;
    cin>>N;
    // paint(0,0,5);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = ' ';
        }
    }

    sear(0, 0, N);
    // sear(0,0,N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<arr[i][j];
        }cout<<"\n";
    }

}