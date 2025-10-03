// 例题练习3：青牛选奖品

// 【题目描述】
// 老师为同学们准备了n份不同的礼物，每份礼物的价值都各不相同，可以用一个正整数表示。

// 现在青牛君可以从中选择k个礼物，请问他最多能获得多少价值。

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-1;j++)
        {
            if(a[j]<a[j+1]) swap(a[j],a[j+1]);
        }
    }
    int k;
    int s=0;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        s=s+a[i];
    }
    cout<<s;
    return 0;
}
