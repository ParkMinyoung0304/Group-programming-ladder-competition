#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
int main(){
    int max,min;
    int sum=0;
    int count=1;
    cin>>min>>max;
    for(int i=min;i<=max;i++){
        sum += i;
        printf("%5d",i); //空五个字符
        if(count!=5 && i!=max){    //保证每行最后一个和整体最后一个自动换行
            count++;
        }
        else{
            cout<<endl;
            count=1;
        }
    }
    cout<<"Sum = "<<sum;   //字符和数值类型结合
    return 0;
}
