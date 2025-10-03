// 【题目描述】

// 青牛买来了很多袋零食（其实就是草），每袋零食的重量不同，青牛喜欢从重量大的开始吃，于是他需要先把这些零食按照重量的从大到小排序。

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}