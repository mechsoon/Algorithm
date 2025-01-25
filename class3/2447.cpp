#include <iostream>
#include <vector>

using namespace std;

void paint(int x,int y,int size){
    for(int i=x;i<x+size;i++)
    {
        for(int j=y;j<y+size;j++){
            if(i==x || i==x+size){
                cout<<"*";
            }else{
                if(j==y || j==y+size){
                    cout<<"*";
                }
            }
        }
        cout<<"\n";
    }

}

void sear(int x,int y,int size){
    if(size==0){

        return;
    }
    paint(x,y,size);
    for(int i=0;i<3;i++)
    for(int j=0;j<3;i++){
        sear(x+i*size/3,y+j*size/3,size/3);
    }


}

int main(){
    int N;
    cin>>N;
    sear(0,0,N);

}