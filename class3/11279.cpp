#include <queue>
#include <iostream>

using namespace std;

int main(){
    priority_queue<int> pq;

    int N;
    cin>>N;

    while(N--){
        int x;
        cin>>x;
        if(x==0){
            if(pq.empty()){
                cout<<0<<"\n";
            }else{
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }else{
            pq.push(x);
        }
    }
}