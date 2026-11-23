#include <bits/stdc++.h>
using namespace std;

#define ll long long


////  ------>>  (coin piles) cses sheet 
//// ------->>> (GOOD QUESTION) ********
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


   int t;
   cin>>t;
   while(t--){
   	 ll a,b;
   	 cin>>a>>b;
    bool hai=false;
  
    ll sum=a+b;
    if(sum%3==0  && a<=2*b && b<=2*a){
     hai=true;
    }

     if(hai){
     	cout<<"YES";
     }else{
     	cout<<"NO";
     }

   	  cout<<endl;
   	  
   }
    

    return 0;
     }
