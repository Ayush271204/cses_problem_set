// USACO -> cses (sum of three value)

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
    vector<pair<int,int>>vt;
    for(int i=0;i<n;i++){
    	vt.push_back({arr[i],i+1});
    }
    sort(vt.begin(),vt.end());
    vector<int>ans;
    bool ok=false;
    for(int i=0;i<n;i++){
       int sum=vt[i].first;
       int target=x-sum;
       int j=i+1;
       int ed=n-1;
       bool hai=false;
       while(j<ed){
         if(vt[j].first+vt[ed].first==target){
         	ans.push_back(vt[i].second);
         	ans.push_back(vt[j].second);
         	ans.push_back(vt[ed].second);
            ok=true;
         	hai=true;
         	break;
         }else if(vt[j].first+vt[ed].first>target){
         	ed--;
         } else{
         	j++;
         }
       }   
      if(hai){
      	ok=true;
      	break;
      }

    }

    if(ok){
    	sort(ans.begin(),ans.end());
    	for(int i=0;i<ans.size();i++){
    		cout<<ans[i]<<" ";
    	}
    }else{
    	cout<<"IMPOSSIBLE";
    }

    return 0;
}
