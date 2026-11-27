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
   sort(arr.begin(),arr.end());
   ll median=arr[n/2];
   ll ans=0;
   for(auto x:arr){
      ans+= abs(x-median);
   } 
   cout<<ans;
    return 0;
}
