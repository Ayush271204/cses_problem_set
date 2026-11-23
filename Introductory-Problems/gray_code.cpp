// ----->>>>     GREY CODE   <<<<<<------\\
      //----->>>   CSES


#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<string> solve(int n){
if(n==0){
    return {"0","1"};
}
 vector<string>a=solve(n-1);  
 vector<string>b=a;

 reverse(b.begin(),b.end());
 for(int i=0;i<a.size();i++){
    a[i]="0"+a[i];
 }

 for(int i=0;i<b.size();i++){
    b[i]= "1"+b[i];
 }

 a.insert(a.end(),b.begin(),b.end());
 return a;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<string>ans= solve(n-1);
    for(auto a:ans){
        cout<<a<<endl;
    } 
    return 0;
}
