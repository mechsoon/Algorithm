#include <iostream>
#include <algorithm>
using namespace std;

int N;
int arr[1001];
int d[1001];



int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    fill(d,d+N,1);
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                d[i]=max(d[i],d[j]+1);
            }
        }
    }    
    cout<<*max_element(d,d+N);
}