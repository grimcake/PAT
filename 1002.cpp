/*************************************************************************
	> File Name: 1002.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月20日 星期日 21时42分58秒
 ************************************************************************/

#include<iostream>
using namespace std;

double a1[1020];
int k, n;
double a;

int main()
{
    scanf("%d", &k);
    for(int i = 1; i<=k; i++)
    {
        scanf("%d %lf", &n, &a);
        a1[n] += a;
    }
    scanf("%d", &k);
    for(int i = 1; i<=k; i++)
    {
        scanf("%d %lf", &n, &a);
        a1[n] += a;
    }

    int sum = 0;
    for(int i = 1010; i>=0; i--)
    {
        if(a1[i]!=0)
        {
            sum++;
        }
    }
    printf("%d", sum);
    for(int i = 1010; i>=0; i--)
    {
        if(a1[i]!=0)
        {
            printf(" %d %.1lf", i, a1[i]);
        }
    }
    printf("\n");



    return 0;
}
