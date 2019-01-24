/*************************************************************************
	> File Name: 1004.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 21时54分04秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m;
int vis[110];
int num[110];

struct node
{
    int id, lv;
};

vector<int> G[110];
queue<node> que;
int Max = 1;
void bfs()
{
    node p; p.id = 1; p.lv = 1;
    que.push(p);
    while(!que.empty())
    {
        node f = que.front();
        que.pop();
        if(G[f.id].size() == 0)
        {
            num[f.lv]++;
        }
        for(int i = 0; i<G[f.id].size(); i++)
        {
            int v = G[f.id][i];
            p.id = v; p.lv = f.lv+1;
            que.push(p);
            Max = max(Max, p.lv);
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i = 1; i<=m; i++)
    {
        int u, k, v;
        cin>>u>>k;
        for(int j = 1; j<=k; j++)
        {
            cin>>v;
            G[u].push_back(v);
        }
    }
    bfs();
    for(int i = 1; i<=Max; i++)
    {
        if(i!=1) cout<<" ";
        cout<<num[i];
    }
    cout<<endl;

    return 0;
}


