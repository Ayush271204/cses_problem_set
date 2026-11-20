#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n){
    
   if(n==1){
      return;
   }
 
    if(n%2!=0){
        ll p=(n*3)+1;
        cout<<p<<" ";
        solve((n*3)+1);
    }else{
        ll t=n/2;
        cout<<t<<" ";
        solve(n/2);
    }
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

      ll n;
    cin>>n;
    vector<ll>arr;
    arr.push_back(n);
    cout<<n<<" ";
    solve(n);


    return 0;
}
