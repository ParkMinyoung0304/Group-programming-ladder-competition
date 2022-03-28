#include<stdio.h>
#include<iostream>
#include<string>
#define maxsize 10
using namespace std;

int main()
{
    string num;
    int A[10] = {0};
    cin>>num;
    for(int i=0; i<=num.size(); i++){
    	A[num[i]-'0']++;
    	}
    for(int j=0; j<=9; j++){
        if(A[j]!=0){
            printf("%d:%d\n",j,A[j]);
        }
    }
    return 0;
    }
