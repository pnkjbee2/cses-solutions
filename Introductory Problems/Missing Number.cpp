#include <bits/stdc++.h>
using namespace std;
 
 void solve(){
    long long int n;cin>>n;long long int sum=0;
    for(int i=0;i<n-1;i++){
        long long int a;cin>>a;sum+=a;
    }
    cout<<(n*(n+1)/2)-sum;
 }
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}