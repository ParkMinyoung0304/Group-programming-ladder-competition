#include<iostream>
#include<cstring>
using namespace std;

string num;
string number[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu","fu"};

int main()
{
    cin>>num;
    for(int i=0;i<num.length(); i++){           //注意这里length要加()
        if(num[i]=='-'){          //注意这里是单引号
            cout<< number[10];
        }
        else{
            cout << number[num[i]-'0'];   //注意这里是单引号
        }
        if(i<num.length()-1){          //这里可以使得最后没有空格，要积累
            cout<<" ";
        }
        
    }
    
    cout<<endl;
    return 0;
}
