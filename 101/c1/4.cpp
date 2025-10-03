// 例题练习4：第 k 小整数


// 【题目描述】

// 现有 n 个正整数，n≤10000，要求出这 n 个正整数中的第 k 个最小整数（相同大小的整数只计算一次），k≤1000，正整数均小于 30000。
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[30000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            swap(a[i],a[j]);
        }
    }
    int k;
    cin>>k;
    int z=a[0];
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(z<a[i])
        {
            z=a[i];
            b=b+1;
        }
        if(b==k-1) break;
    }
    cout<<z;
    return 0;
}