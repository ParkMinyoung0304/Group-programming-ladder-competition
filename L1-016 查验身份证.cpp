#include<iostream>
#include<cctype>
using namespace std;
int main(void)
{
int weight[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[15]="10X98765432";
//标记是否全部通过校验
int allpass =1;
int n;
 cin >> n;
while(n--)
{
  string s;
  cin >> s;

int flag =1;//标记是否为数字
int i;

int sum =0;//加权累加和
for(i =0; i <17; i++)
{

if(isdigit(s[i])==0)  //判断是否为数字
{
    flag =0;
break;
}
else

    sum +=(s[i]-'0')* weight[i];//计算加权累加和
}
if(flag ==0|| M[sum %11]!= s[17])
{

//有⾮数字或者校验不匹配则输出
   allpass =0;
   cout << s << endl;
}
}
if(allpass)
  cout <<"All passed"<< endl;
return 0;
}
