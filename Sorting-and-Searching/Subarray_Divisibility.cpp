//  usaco (prefix sum)---->> cses(subarray divisibility):::


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

     ll sum=0;

     
     unordered_map<ll,ll>mp;
     mp[0]=1;
     for(int i=0;i<n;i++){
     	sum+=arr[i];
     	ll rem=((sum%n)+n)%n;

        mp[rem]++;
     }
     ll ans=0;
     for(auto m:mp){
     	ll x=m.second;
     	ans+=(x*(x-1))/2;
     }
    cout<<ans;
    return 0;
}
