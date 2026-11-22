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
 
    ll ans=1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            ans++;
        }
    }
   
    cout<<ans;
    return 0;
}
