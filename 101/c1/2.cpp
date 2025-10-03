// 【题目描述】

// 从一个数组中，任意选出三个数相乘，能得到一个乘积，试着求一下乘积最大值为多少。
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
    int sum1,sum2;
    sum1=a[0]*a[1]*a[2];
    sum2=a[0]*a[n-1]*a[n-2];
    cout<<max(sum1,sum2);
    return 0;
}