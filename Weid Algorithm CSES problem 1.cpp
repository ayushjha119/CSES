


/*
BRUTE NOT WORK use long long

int n;
    cin>>n;

    vector<int> ans;
    ans.push_back(n);

    while(n!=1)
    {
      if(n%2!=0){
        n=3*n+1;
        ans.push_back(n);
      }
      else{
        n = n/2;
        ans.push_back(n);
      }
    } 

    for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main() {

  

  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 

    ll n;
    cin>>n;

    cout<<n;

    while(n>1){
      if(n%2==0)
        n = n/2;
      else
        n = 3*n+1;
      cout<<" "<<n;
    }




      

    

return 0;
}