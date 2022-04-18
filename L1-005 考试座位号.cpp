#include<iostream>
#include<cstring>
using namespace std;
int count;
struct point{           //定义一个类型，通过对象来存储
    string id;
    int kaoshi_num;
};
int main(){
    cin>>count;
    point stu;
    point num[1005];        //初始化一个对象数组
    int shiji_num;
    for(int i = 0;i<count;i++){
        cin>>stu.id>>shiji_num>>stu.kaoshi_num;
        num[shiji_num] = stu;
    }
    int search_count;
    int tem;         
    cin>>search_count;
    for(int j=0;j<search_count;j++){
        cin>>tem[j];        
        cout<<num[tem].id<<" "<<num[tem].kaoshi_num<<endl;
    }
    return 0;
}
