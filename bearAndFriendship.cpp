#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>adj;
vector<bool>visited;
int nodes,edges;

void dfs(int node){
    visited[node] = true;
    nodes++;
    edges += adj[node].size();

    for(int neighbor: adj[node]){
        if(!visited[neighbor]){
            dfs(neighbor);
        }
    }
}


int main()
{
    int n,m;
    cin>>n>>m;

    adj.resize(n+1);
    visited.resize(n+1,false);

    for(int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    for(int i =1; i<=n;i++){
        if(!visited[i]){
            nodes = 0;
            edges = 0;
            dfs(i);

            edges/=2;
            if(edges != 1LL * nodes * (nodes - 1) / 2){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    
    cout<<"YES"<<endl;
    return 0;
}