/*************************************************************************
	> File Name: 1008.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月25日 星期五 20时46分16秒
 ************************************************************************/

#include<iostream>
using namespace std;

int n;
int x, sum = 0;

int main()
{
    int now = 0;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        cin>>x;
        if(x>now) sum += 6*(x-now)+5;
        else sum += 4*(now-x)+5;
        now = x;
    }
    cout<<sum<<endl;
    return 0;
}
