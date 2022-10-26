#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll n,m,source,i,j,a,b,wt;
   cin>>n>>m>>source;
   vector<pair<ll,ll>>adj[n];
   for(i=0;i<m;i++){
       cin>>a>>b>>wt;
       adj[a].push_back({b,wt});adj[b].push_back({a,wt});
   }
   priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>> >Q;
   vector<ll>dist(n,INT_MAX);
   dist[source]=0;
   Q.push({0,source});
   while(!Q.empty()){
       ll u=Q.top().second;Q.pop();
       for(auto it:adj[u]){
           ll v=it.first;
           ll weight=it.second;
           if(dist[v]> dist[u]+weight){
               dist[v]=dist[u]+weight;
               Q.push({dist[v],v});
           }
       }
   }
   for(i=0;i<n;i++) cout<<i<<" "<<dist[i]<<"\n";
    return 0;
}
