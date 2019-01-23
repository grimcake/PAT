/*************************************************************************
	> File Name: 1001.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月20日 星期日 21时26分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

char res[20];
int cnt = 0;

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a+b;
    if(c<0) 
    {
        printf("-");
        c = -c;
    }
    if(c == 0){
        printf("0\n");
        return 0;
    }
    while(c)
    {
        res[cnt++] = c%10;
        c/=10;
    }
    for(int i = cnt-1; i>=0; i--)
    {
        printf("%d", res[i]);
        if(i%3 == 0 && i!=0)
        {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}
