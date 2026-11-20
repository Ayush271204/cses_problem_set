#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int n;
     cin>>n;
     vector<ll>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     ll maxi=arr[0];
     ll cnt=0;
     for(int i=1;i<n;i++){
      if(arr[i]>maxi){
        maxi=arr[i];
      }else {
        cnt+=(maxi-arr[i]);
      }
     }
    cout<<cnt;
    return 0;
}
