// (USACO) more on prefix sum  
//  cses(forest queries)
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

      int n,q;
      cin>>n>>q;

      vector<vector<int>>arr(n+1,vector<int>(n+1));
      for(int i=1;i<=n;i++){
      	for(int j=1;j<=n;j++){
      		 char c;
      		 cin>>c;
      		 if(c=='*'){
      		 	arr[i][j]=1;
      		 }else{
      		 	arr[i][j]=0;
      		 }
      	  }
      }
  
vector<vector<int>>pref(n+1,vector<int>(n+1));
   for(int i=1;i<=n;i++){
   	for(int j=1;j<=n;j++){
        pref[i][j]=arr[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];         
   	 }
   }

    
   for(int i=0;i<q;i++){
   	int a,b,c,d;
   	cin>>a>>b>>c>>d;
   	cout<<(pref[c][d]-pref[c][b-1]-pref[a-1][d]+pref[a-1][b-1]);
   	cout<<endl;
   }


    return 0;
}
