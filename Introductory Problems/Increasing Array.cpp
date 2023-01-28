#include <bits/stdc++.h>
using namespace std;
 
 void solve(){
   long long int n;cin>>n;long long int diff=0;int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];    
   }
   for(int i=1;i<n;i++){
    if(a[i]<a[i-1]){ 
    diff+=abs(a[i]-a[i-1]);
    a[i]=a[i-1];   }
   }cout<<diff;

   
 }
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}