

#include<bits/stdc++.h>

using namespace std;



int dfs(vector<vector<int>> &adj,int src,vector<bool> &visitado){

    visitado[src] = true;

    long long int ans = 1;

    for(int i=0;i<adj[src].size();++i){

        if(!visitado[adj[src][i]]){

            ans += dfs(adj,adj[src][i],visitado);

        }

    }

    return ans;

}



long roads_library(vector<vector<int>> adj,int c_lib,int c_road,int n){

    vector<int> comp;

    vector<bool> visitado(n+1,false);

    for(int i=1;i<=n;++i){

        if(adj[i].size()>0 and !visitado[i]){

            comp.push_back(dfs(adj,i,visitado));

        }

        else if(adj[i].size()==0){

            comp.push_back((1));

        }

    }

    long long int ans = 0;

    for(int i=0;i<comp.size();++i){

        ans += min(c_lib + (comp[i] - 1)*c_road , comp[i]*c_lib);

    }

    return ans;

}

int main(){

    int q;

    cin>>q;

    for(int i=0;i<q;i++){

        int n,m,c_lib,c_road;

        cin>>n>>m>>c_lib>>c_road;

        vector<vector<int>> adj(n+1);

        for(int j=0;j<m;j++){

            int u,v;

            cin>>u>>v;

            adj[u].push_back(v);

            adj[v].push_back(u);

        }

        long long int ans = roads_library(adj,c_lib,c_road,n);

        cout<<ans<<endl;

    }

    

    return 0;

} 
