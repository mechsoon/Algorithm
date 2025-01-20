#include <cmath>
#include <queue>
#include <iostream>
#include <vector>

using namespace std;

struct comp{
    bool operator()(int a,int b){
        if (abs(a)==abs(b)){
            return a>b;
        }
        return abs(a)>abs(b);
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int,vector<int>,comp> pq;

    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        if(num==0){
            if(pq.empty()){
                cout<<0<<"\n";
            }else{
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }else{
            pq.push(num);

        }
        // pq.push(num);

        
    }
}