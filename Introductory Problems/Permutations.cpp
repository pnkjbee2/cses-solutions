#include <bits/stdc++.h>
using namespace std;
 
 void solve(){
  int t;cin>>t;
  while(t--){ 
   int x,y;cin>>x>>y;
   if(x==y){
    cout<<(x*x)-(x-1)<<endl;
   }else if(x>y){
      if((x%2==0)){
        cout<<(x*x)-(y-1)<<endl;;
      }else if((x%2!=0)){
        cout<<((x-1)*(x-1))+y<<endl;
      }
    }else if(x<y){
      if(y%2!=0){
        cout<<(y*y)-(x-1)<<endl;
      }else if(y%2==0){
        cout<<((y-1)*(y-1))+x<<endl;
      }
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