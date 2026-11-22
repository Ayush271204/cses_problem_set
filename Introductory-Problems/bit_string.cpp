#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    ll n;
    cin>>n;


//   first method----->
     ll M=1e9+7;
     ll ans=1;
    // for(int i=0;i<n;i++){
    //   ans*=2;
    //   ans=ans%M;
    // }
    // cout<<(ans%M);



//  binary exponentiation
 ll a=2;
  while(n>0){
  if(n&1){
  	ans=(ans*a)%M;
  }

  a=(a*a)%M;
  n>>=1;
  }  
  cout<<ans;
    return 0;
}
