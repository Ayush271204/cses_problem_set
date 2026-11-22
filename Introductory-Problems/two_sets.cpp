#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
 
    vector<bool>arr(n+1,false);
    vector<ll>a;
    vector<ll>b;
    ll sum=0;
    ll temp=(n*(n+1))/2;
    
    if(temp%2!=0){
    	cout<<"NO";
    }else{
      
      ll target=temp/2;
      for(int i=n;i>=1;i--){
      	 if(target>=i){
      	 	target-=i;
      	 	arr[i]=true;
      	 	a.push_back(i);
      	 }
      }
      for(int i=1;i<=n;i++){
        if(arr[i]==false){
          b.push_back(i);
        }
       }


      cout<<"YES";
      cout<<endl;
      cout<<a.size(); 
      cout<<endl;
      for(int i=0;i<a.size();i++){
         cout<<a[i]<<" ";
      }
       cout<<endl;
 
       cout<<b.size();
       cout<<endl;
       for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
       }



    }

    return 0;
}
