/*************************************************************************
	> File Name: 1006.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 23时37分01秒
 ************************************************************************/

#include<iostream>
#include<algorithm>

using namespace std;

int n;

struct node
{
    char name[50];
    int shour, smin, ssec;
    int ehour, emin, esec;
}p[10010];

bool cmp1(node a, node b)
{
    if(a.shour != b.shour)
    {
        return a.shour<b.shour;
    }
    else if(a.smin != b.smin)
    {
        return a.smin<b.smin;
    }
    else
    {
        return a.ssec<b.ssec;
    }
}
bool cmp2(node a, node b)
{
    if(a.ehour != b.ehour)
    {
        return a.ehour<b.ehour;
    }
    else if(a.emin != b.emin)
    {
        return a.emin<b.emin;
    }
    else
    {
        return a.esec<b.esec;
    }
}

int main()
{
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        cin>>p[i].name;
        scanf("%d:%d:%d", &p[i].shour, &p[i].smin, &p[i].ssec);
        scanf("%d:%d:%d", &p[i].ehour, &p[i].emin, &p[i].esec);
    }
    sort(p+1, p+1+n, cmp1);
    cout<<p[1].name<<" ";
    sort(p+1, p+1+n, cmp2);
    cout<<p[n].name<<endl;
    return 0;
}
