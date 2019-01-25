/*************************************************************************
	> File Name: 1009.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月25日 星期五 21时00分27秒
 ************************************************************************/

#include<iostream>
using namespace std;


struct A
{
    int k;
    double p;
}a[1010];

struct B
{
    int k;
    double p;;
}b[1010];

int na, nb;
double num[2010];

int main()
{
    cin>>na;
    for(int i = 1; i<=na; i++)
    {
        int k; 
        double p;
        cin>>k>>p;
        a[i].p = p; a[i].k = k;
    }

    cin>>nb;
    for(int i = 1; i<=nb; i++)
    {
        int k;
        double p;;
        cin>>k>>p;
        b[i].p = p; b[i].k = k;
    }

    for(int i = 1; i<=na; i++)
    {
        for(int j = 1; j<=nb; j++)
        {
            num[a[i].k+b[j].k] += a[i].p*b[j].p;
        }
    }
    int cnt = 0;
    for(int i = 2005; i>=0; i--)
    {
        if(num[i]!=0)
        {
            cnt++;
        }
    }
    cout<<cnt;
    for(int i = 2005; i>=0; i--)
    {
        if(num[i]!=0)
        {
            printf(" %d %.1lf", i, num[i]);
        }
    }
    cout<<endl;
    return 0;
}
