#include <bits/stdc++.h>
using namespace std;
 
 void solve(){
    long long int  n;cin>>n;
    cout<<n<<' ';
    while(n!=1){ 
    if(n%2==0){
        n/=2;
        cout<<n<<' ';
    }else{
        n=(n*3)+1;
        cout<<n<<' ';
    }
}
 }
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}