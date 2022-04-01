#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
	set<string>all,dup;
	int n;
	cin>>n;
	while(n--) {
		int k;
		cin>>k;
		string s;
		if(k!=1) {
			while(k--) {	
				cin>>s;
				all.insert(s);
			}
		}
		else
		{
		while(k--)
		cin>>s;	
		}
		
	}
	int m;
	bool flag=false;
	cin>>m;
	while(m--) {
		string s;
		cin>>s;
		if(all.find(s)==all.end()&&dup.find(s)==dup.end()) {
			dup.insert(s);
			if(flag==false)   //保证第一个输出没有空格
				cout<<s;
			else
				cout<<" "<<s;
			flag=true;
		}
	}
	if(dup.empty())
		cout<<"No one is handsome"<<endl;
}
