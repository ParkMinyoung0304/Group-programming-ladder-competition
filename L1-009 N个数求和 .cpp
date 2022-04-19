#include<bits/stdc++.h>
#define LL long long  
using namespace std;  
LL gcd(LL a,LL b)
{  
    return a%b==0?b:gcd(b,a%b);  
}  
int main()  
{  
    LL t,a[101],b[101],s1=0,s2=0;  
    scanf("%lld",&t);  
    
    for(int i=0; i<t; i++)  
        scanf("%lld/%lld",&a[i],&b[i]);  
    
    s2=b[0];  
    
    for(int i=1; i<t; i++)  
        s2=s2/gcd(s2,b[i])*b[i];
    
    for(int i=0; i<t; i++)  
        s1+=s2/b[i]*a[i];
    LL n=s1/s2,m=abs(s1%s2);  
    if(m==0) printf("%lld\n",n);  
    else  
    {  
        if(n!=0)printf("%lld ",n);  
        if(s1<0&&n==0)printf("-");  
        printf("%lld/%lld\n",m/gcd(s2,m),s2/gcd(s2,m));  
    }  
    return 0;  
}

#include<iostream>
#include<cmath>
using namespace std;
int max_common_divisor(int x, int y)//求最大公约数
{
    if (y == 0) 
        return x;
    else 
        return max_common_divisor(y, x % y);
}
int main()
{
    int N;
    cin >> N;
    getchar();//解决换行
    int a, b;//用于接收分子和分母
    int up = 0, down = 1;
    for (int i = 0; i < N; i++)
    {
        char ch;//用来接收分号
        cin >> a >> ch >> b;
        up = up * b;
        a = down * a;
        down = down * b;
        up = up + a;
        b = down;
    }
    int u = max_common_divisor(up, down);//最大公约数
    if (u == 0) 
        cout << "0";//特殊情况  分子分母都是0
    else
    {
        up = up / u;
        down = down / u;
        if (abs(up) >= down)//如果分子大于分母
        {
            int y = up / down;//求整数部分
            up = abs(up) % down;
            if (up != 0) 
                cout << y << " " << up << "/" << down;
            else 
                cout << y;
        }
        else
        {
            if (up == 0) //分子为0
                cout << "0";
            else //分子小于分母，直接输出
                cout << up << "/" << down;
        }
    }
}
