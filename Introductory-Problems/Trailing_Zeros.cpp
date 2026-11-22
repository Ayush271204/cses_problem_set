#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   ll n;
   cin>>n;

   ll cnt=5;
   ll ans=0;
   while((n/cnt)>0){
   	 ans+= ceil(n/cnt);
      cnt=cnt*5;

   }    
  cout<<ans;
    return 0;
}
