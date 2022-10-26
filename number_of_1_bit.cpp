//program to find the number of 1 bits in an integer

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int A;
    cin>>A;
     int ans=0;
   while(A>0){
      A&=(A-1);
      ans++;
   }
   cout<<ans;
}