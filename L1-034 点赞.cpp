#include<iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    //定义一个整型空数组,用来桶排序
    int a[1005];
    int num;
    int count;
    int temp = 0;
    int max_count = 0;
    int max_num = 0;
    cin>>num;
    memset(a,0,sizeof(a));
    for(int i = 0;i<num;i++){
        cin>>count;
        for(int j = 0;j<count;j++){
            cin>>temp;
            a[temp]++;
            if(a[temp]>max_count){
                max_count = a[temp];
                max_num = temp;
            }
            else if(a[temp]==max_count){
                if(temp>max_num){
                    max_num = temp;
                }
            }
        }
    }
    cout<<max_num<<" "<<max_count;
}
