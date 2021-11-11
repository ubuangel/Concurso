//Este problema es muy interesante. El problema no es difícil, pero realmente me cuesta media hora pensar en una solución.
// Claramente, la pregunta es buscar una ruta, tal que el borde de peso máximo en la ruta sea mínimo.
// Podríamos buscar binariamente la respuesta y verificar si podríamos llegar al destino solo usando los bordes menores o iguales al valor.


//https://www.hackerrank.com/challenges/jack-goes-to-rapture/problem
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair <int,int> > adj[50001];
int main()
{
    int n,m;
    cin>>n>>m;
   // scanf("%d %d",&n,&m);
    
    for (int i=0;i<m;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        adj[a].push_back(make_pair(b,c)); // Adjacent matrix
        adj[b].push_back(make_pair(a,c)); 
    }
    int be = 1, ed = 10000002;
    while (be <= ed)
    {
        int mid = (be + ed) / 2;
        // Check connectivity, using BFS
        int q[50001], visited[50001];
        int qbe = 0, qed = 1;
        q[0] = 1;
        memset(visited,0,sizeof(visited));
        visited[1] = 1;
        while (qbe < qed)
        {
            int len = adj[q[qbe]].size();
            for (int i=0; i<len; i++)
            {
                if (visited[adj[q[qbe]][i].first] == 0 && adj[q[qbe]][i].second <= mid)
                {
                    q[qed++] = adj[q[qbe]][i].first;
                    visited[adj[q[qbe]][i].first] = 1;
                }
            }
            qbe++;
        }
        if (visited[n] == 1)
            ed = mid-1;
        else
            be = mid+1;
    }
    if (be > 10000000)
        printf("NO PATH EXISTS\n");
    else
        printf("%d\n",be);
    
}

/*
 * 
 * 
 * #include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 5;
int id[MAX],size[MAX], nodos, bordes;
pareja <long long, pareja<int, int> > p[MAX];
void inicializar()
{
for(int i=0;i<MAX;i++)
{
    id[i]=i;
    size[i]=1;
}
}

 int origen(int i)
    {
        int j=i;
        while(id[j]!=j)
            j=id[id[j]];
        while(i!=j)
        {
            int newp=id[i];
            id[i]=j;
            i=newp;
        }
        return j;
    }
 void union1(int p,int q)
    {
        int i=origen(p);
         int j=origen(q);
         if(size[i]>size[j])
         {
             id[j]=i;
             size[i]+=size[j];
         }
         else
         {
            id[i]=j;
             size[j]+=size[i];
         }
    }
long long rapturing()
{
      int x, y;
    long long cost, minCost = 0;
    for(int i = 0;i < bordes;++i)
    {
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
       if(origen(x)!=origen(y))
           union1(x,y);
        if(origen(0)==origen(nodos-1))
        {
            minCost=cost;
            break;
        }
    }
    if(origen(0)!=origen(nodos-1))
        return -1;
        return minCost;
}
int main()
{
int x, y;
    long long peso, cost, minCost;
     inicializar();
    cin >> nodos >> bordes;
    for(int i = 0;i < bordes;++i)
    {
        cin >> x >> y >> peso;
        p[i] = make_pair(peso, make_pair((x-1), (y-1)));
    }
    sort(p, p + bordes);
    long long resp=rapturing();
    if(resp==-1)
        cout<<"NO PATH EXISTS";
    else
    cout<<resp;
}
 */
