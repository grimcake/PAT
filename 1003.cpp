/*************************************************************************
	> File Name: 1003.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月20日 星期日 22时04分45秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;


int n, m, s, e;
int val[510];

int dis[510], vis[510];
int num[510], pre[510];
int ma[510][510];


void dijkstra()
{
    dis[s] = 0;
    vis[s] = 1;
    pre[s] = val[s];
    
    for(int i = 0; i<n; i++)
    {
        dis[i] = ma[s][i];
        if(dis[i]!=9999999 && i!=s)
        {
            pre[i] = pre[s]+val[i];
        }
    }
    int k = s;
    for(int i = 1; i<n; i++)
    {
        int Max = 9999999;
        for(int j = 0; j<n; j++)
        {
            if(!vis[j] && dis[j]<Max)
            {
                k = j;
                Max = dis[j];
            }
        }
        vis[k] = 1;
        for(int j = 0; j<n; j++)
        {
            if(!vis[j] && dis[j]>dis[k]+ma[k][j])
            {
                dis[j] = dis[k]+ma[k][j];
                num[j] = num[k];
                pre[j] = pre[k]+val[j];
            }
            else if(!vis[j] && dis[j] == dis[k]+ma[k][j])
            {
                num[j] += num[k];
                if(pre[j]<pre[k]+val[j])
                {
                    pre[j] = pre[k]+val[j];
                }
            }
        }
    }
}

int main()
{
    cin>>n>>m>>s>>e;
    for(int i = 0; i<n ;i++)
    {
        cin>>val[i];
    }
    for(int i = 0; i<n; i++)
    {
        dis[i] = 9999999;
        num[i] = 1;
        vis[i] = 0;
        pre[i] = val[i];
        for(int j = 0; j<n; j++)
        {
            ma[i][j] = 9999999;
        }
    }
    for(int i = 1; i<=m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        ma[u][v] = ma[v][u] = w;
    }
    dijkstra();
    cout<<num[e]<<" "<<pre[e]<<endl;
    return 0;
}
