#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=0;
    ll ans=INT_MIN;
    for(int i=0;i<n;i++){
      sum+=arr[i];
      ans=max(ans,sum);
      if(sum<0){
        sum=0;
      }  
    }
   cout<<ans;
    return 0;
}
