/*
Bismillah hir rahmanir rahim
*/

#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<long long>>arr,long long n)
{
    queue<int>q;
    q.push(1);
    vector<long long>leve(n+1,-1);
    vector<long long>par(n+1,-1);
    leve[1]=0;
    while(!q.empty())
    {
         int u=q.front();
         q.pop();
         for(auto x:arr[u])
         {
             if(leve[x]==-1)
             {
              leve[x]=leve[u]+1;
              par[x]=u;
              q.push(x);
             }

         }
    }
    int i;

    for(i=1;i<=n;i++) /// kar level koto tuku 1 theke
    {
       // cout<<i<<"  :"<<leve[i]<<endl;

    }

    while(cin>>i) /// kar parents ke seta ber korchi
    {
        cout<<par[i]<<endl;
    }


int main()
{    long long n,e,i;
     cin>>n>>e;
     vector<vector<long long>>arr(n+1);
     for(i=0;i<e;i++)
     {
         int x,y;
         cin>>x>>y;
         arr[x].push_back(y);
         arr[y].push_back(x);
     }
     bfs(arr,n);


    return 0;
}
