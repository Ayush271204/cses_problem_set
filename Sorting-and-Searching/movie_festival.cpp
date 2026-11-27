#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
    vector<pair<ll,ll>>vt;
    while(n--){
          ll a,b;
          cin>>a>>b;
          vt.push_back({b,a});
    }
    ll ans=1;
    sort(vt.begin(),vt.end());
    ll ed=vt[0].first;
    for(int i=1;i<vt.size();i++){
        if(vt[i].second>=ed){
            ans++;
            ed=vt[i].first;
        }
    }
   cout<<ans;
    return 0;
}
