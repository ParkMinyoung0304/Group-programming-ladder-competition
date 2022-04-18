//连续因子序列
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1,num2;
    int sum=0;
    int count=0;
    int j;
    int start;
    cin>>num1;
    for(int i=2;i<sqrt(num1);i++){
        count=0;
        num2=num1;
        j = i;
        while(num2 % j == 0){
            num2 = num2 / j;
            count++;
            j++;
        }
        if(sum<count){
            sum = count;
            start = i;
        }
            
    }
    
    if(sum!=0){
        cout<<sum<<endl;
        for(int k=start;sum>0;k++){
            sum--;
            if (k != start)
            {
                cout << '*';
            }
            cout << k;
        } 
    }
    else{
        cout << 1 << endl << num1;
    }
    return 0;   
}
