#include <bits/stdc++.h>
using namespace std;
 
 void solve(){
    string t;cin>>t;int high=1;int ph=1;
    int n=t.length();
    for(int i=0;i<n;i++){
        if(t[i]==t[i+1]){
            high+=1;
          if( ph<high)
           ph=high;
        }
        if(t[i]!=t[i+1]){
            high=1;
        }
    }cout<<max(high,ph);
 }
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}