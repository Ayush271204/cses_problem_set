//  usaco (prefix sum)------>>   cses subarray sum(II)


#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
     ll n,x;
     cin>>n>>x;
     vector<ll>arr(n);
     for(int i=0;i<n;i++){
     	cin>>arr[i];
     }

     map<ll,ll>mp;
     mp[0]=1;
     ll ans=0;
     ll sum=0;
     for(int i=0;i<n;i++){
     	sum+=arr[i];
        if(mp.find(sum-x)!=mp.end()){
        	ans+=mp[sum-x];
        }
        mp[sum]++;
     }
    cout<<ans;

    return 0;
}
