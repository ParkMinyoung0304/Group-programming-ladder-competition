#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>   //要导这个包

using namespace std; 
int main(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);
    for(int i=0;i<3;i++){
        cout<<a[i];
        if(i!=2){
            cout<<"->";
        }
    }
    return 0;
}

