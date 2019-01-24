/*************************************************************************
	> File Name: 1005.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月24日 星期四 23时10分55秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;


char a[110];
int sum = 0;
char b[110];

void output(char c)
{
    if(c == '0') cout<<"zero";
    if(c == '1') cout<<"one";
    if(c == '2') cout<<"two";
    if(c == '3') cout<<"three";
    if(c == '4') cout<<"four";
    if(c == '5') cout<<"five";
    if(c == '6') cout<<"six";
    if(c == '7') cout<<"seven";
    if(c == '8') cout<<"eight";
    if(c == '9') cout<<"nine";
}

int main()
{
    cin>>a;
    int len = strlen(a);
    for(int i = 0; i<len; i++)
    {
        sum += a[i]-'0';
    }
    int cnt = 0;
    if(sum == 0)
    {
        cout<<"zero"<<endl;
        return 0;
    }
    while(sum)
    {
        b[cnt++] = sum%10+'0';
        sum/=10;
    }
    for(int i = cnt-1; i>=0; i--)
    {
        output(b[i]);
        if(i == 0) cout<<endl;
        else cout<<" ";
    }
    return 0;
}
