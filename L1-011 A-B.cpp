
#include <iostream>
#include<string>
using namespace std;

int main()
{
	string word;
    string del;
    string fin;
	getline(cin, word);
	getline(cin, del);
    int len1=word.length();
    int len2=del.length();
	for (int i = 0; i < len1 ; i++)
	{
		bool count = true;
		for (int j = 0; j < len2 ; j++)
		{
			if ( word[i] == del[j])
			{
				count = false;   //通过count = false 来让fin不添加该字符
				break;
			}
		}
		if (count == true)  //count == true 说明这个字符不删除
		{
			fin += word[i];  
		}
	}
	cout << fin;
  return 0;
}

