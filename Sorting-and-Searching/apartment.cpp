#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>arr(n);
    multiset<ll>st;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll>brr(m);
    for(int i=0;i<m;i++){
        cin>>brr[i];
        st.insert(brr[i]);
    }
 
    ll ans=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        auto it=st.lower_bound(arr[i]-k);
        if(it!=st.end()&& *it<=arr[i]+k){
            ans++;
            st.erase(it);
        }
 
    }  
     cout<<ans;
       
    return 0;
}
