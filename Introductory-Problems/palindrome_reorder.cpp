// ----->>>  palindrome reorder 

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    int n=s.size();

   vector<int>freq(26,0);
    for(int i=0;i<n;i++){
      freq[s[i]-'A']++;
    }
     string ans;
     string ans1;
     bool ok=false;
     bool hai=true;
     int odd=0;
     char t1;
    for(int i=0;i<26;i++){
      if(freq[i]%2==0){
         int temp=freq[i]/2;
         
         while(temp--){
         	ans+= ('A'+i);
            ans1+=('A'+i);
        } 
      }else if(freq[i]%2!=0 && hai){
      	 odd=freq[i];
      	t1='A'+i;
      	hai=false;
      }else{
      	 ok=true;
      }
    }

  while(odd--){
  	 ans+=t1;
  }  

  if(ok){
  	cout<<"NO SOLUTION";
  }else{
  	reverse(ans1.begin(),ans1.end());
  	ans+=ans1;
  	cout<<ans;
  }


    return 0;
}
