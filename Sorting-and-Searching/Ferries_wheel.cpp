#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n,x;
    cin>>n>>x;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll i=0;
    ll j=n-1;
    ll ans=0;
    while(i<=j){
        if(arr[i]+arr[j]<=x){
            ans++;
            i++;
            j--;
        }else {
            j--;
            ans++;
        }
    }
 
     cout<<ans;
    return 0;
}
