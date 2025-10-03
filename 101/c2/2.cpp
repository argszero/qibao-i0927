// 【题目描述】

// 青牛在玩牌时，喜欢边摸牌边理牌，牌是1到100的整数，每张不重复，青牛会摸起来n张。


// 他的习惯是这样的：先摸起来一张牌作为手牌，之后每摸一张，他都会把新的牌插入到正确的位置，保持牌从左往右数字是从小到大的。


// 请帮他算算最后手牌应该是什么样的。

 #include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1000],n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=i-1;j>=1;j--)
        {
            if(a[j+1]<a[j]) swap(a[j],a[j+1]);
            else break;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
	return 0; 
}