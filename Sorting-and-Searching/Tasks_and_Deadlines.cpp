#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
    vector<pair<int,int>>vt;
    while(n--){
       int a,d;
       cin>>a>>d;
       vt.push_back({a,d});
      }
 
      sort(vt.begin(),vt.end());
      ll cnt=0;
      ll ans=0;
      for(int i=0;i<vt.size();i++){
          cnt+=vt[i].first;
          ans+= vt[i].second-cnt;
      }
      cout<<ans;
 
 
    return 0;
}
