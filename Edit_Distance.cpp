#include<bits/stdc++.h>
using namespace std;
int pankaj(string s1,string s2,int n,int m){
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0) dp[i][j]=i+j;
            else if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+ min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
        }
    }
    return dp[n][m];
}
int main()
{
   
   string str1,str2;cin>>str1>>str2;
   cout<<pankaj(str1,str2,str1.size(),str2.size());
    return 0;
}