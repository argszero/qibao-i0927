// 例题练习3：军事机密


// 【题目描述】

// 军方截获的信息由 n（n<=30000）个数字组成，因为是敌国的高端秘密，所以一时不能破获。最原始的想法就是对这 n 个数进行从小到大排序，每个数都对应一个序号，然后对第 i 个是什么数感兴趣，现在要求编程完成。
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
    int i;
    cin>>i;
    cout<<a[i-1];
    return 0;
}