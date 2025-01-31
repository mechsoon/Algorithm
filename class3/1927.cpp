#include <iostream>
#include <queue>
#include <functional>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int,vector<int>,greater<int>> pq;
    
    int N;
    cin>>N;

    int ZeroCount=0;
    for (int i=0;i<N;i++){
        int num;
        cin>>num;
        if(num==0){
            if(pq.empty()){
                cout<<0<<"\n";
            }else{
                int temp=pq.top();
                cout<<temp<<"\n";
                pq.pop();
            }
        }else{
            pq.push(num);

        }
        // pq.push(num);

    }

}