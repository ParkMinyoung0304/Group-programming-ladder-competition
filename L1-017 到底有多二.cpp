#include <iomanip>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[60];
    int a_length;
    int odds = 1;
    double fushu = 1;
    int count = 0;
    cin>>a;
    a_length =strlen(a);
    if(a[a_length-1] % 2 == 0){
        odds = 2;
    }
    for(int i=0; i<a_length;i++){
        if (a[i] == '2'){
            count += 1;
        }
    }
    if(a[0]=='-'){
        fushu = 1.5;
        a_length = a_length -1;
        }
    printf("%.2f%%", count*1.0 / a_length * odds * fushu * 100);
    return 0;
}
