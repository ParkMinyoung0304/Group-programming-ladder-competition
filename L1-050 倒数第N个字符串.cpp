#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
 
int main(){
    int L,num;
    string a="";
    scanf("%d %d",&L,&num);
    for(int i = 1; i<=L; i++){
        a +='z';
    }
    int r=L-1,tmp;
    num=num-1;
    while(num){
		tmp=num%26;
		a[r--]='z'-tmp;
		num/=26;
        
    }
    cout<<a<<endl;
	return 0;
}
