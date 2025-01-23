#include <iostream>
using namespace std;

using ll=long long;

ll pow(ll a,ll b,ll m){
    if(b==1) return a%m;
    ll res=pow(a,b/2,m);
    res=res*res%m;
    if(b%2==0)return res;
    return res*a%m;
}
int main(){
    ll A,B,C;
    cin>>A>>B>>C;
    // A11 A 5 A 6 
    cout<<pow(A,B,C);
}