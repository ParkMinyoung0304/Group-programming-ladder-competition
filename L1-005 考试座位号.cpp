#include<iostream>
#include<cstring>
using namespace std;
int n,m,tem[1005];
struct point 
{   
    string id;
    int b;
};
point num[1005];
int main()
{
    point temm;
    int a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>temm.id>>a>>temm.b;
        num[a]=temm;
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>tem[i];
    }
    for(int i=1;i<=m;i++)
    {
        cout<<num[tem[i]].id<<" "<<num[tem[i]].b<<endl;
    }
    return 0;
}
