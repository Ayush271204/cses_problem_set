#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string arr;
    cin>>arr;
    int cnt=1;
    int maxi=0;
    for(int i=1;i<arr.size();i++){
       if(arr[i]==arr[i-1]){
        cnt++;
       }else{
         maxi=max(maxi,cnt);
         cnt=1;
       }
    }
    maxi=max(maxi,cnt);
    cout<<maxi;
    return 0;
}
