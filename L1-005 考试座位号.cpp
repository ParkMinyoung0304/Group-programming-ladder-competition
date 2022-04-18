#include<iostream>
#include<cstring>
using namespace std;
int count;
struct point{
    string id;
    int kaoshi_num;
};
int main(){
    cin>>count;
    point stu;
    point num[1005];
    int shiji_num;
    for(int i = 0;i<count;i++){
        cin>>stu.id>>shiji_num>>stu.kaoshi_num;
        num[shiji_num] = stu;
    }
    int search_count;
    int tem[1005];
    cin>>search_count;
    for(int j=0;j<search_count;j++){
        cin>>tem[j];
    }
    for(int k=0;k<search_count;k++){
        cout<<num[tem[k]].id<<" "<<num[tem[k]].kaoshi_num<<endl;
    }
    return 0;
}
