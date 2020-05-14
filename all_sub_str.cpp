/*
 #codehabbit
 #100daysof code
 day 2 c
 practice: string
*/
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--)
	{
		string str,str1;
		int count=0,m;
		cin>>m;
		cin>>str;
		for(int i=0;i<m;i++)
		{
			for(int j=1;j<=m;j++)
			{

				str1=str.substr(i,j);
				//cout<<str1<<endl;
				if(str1[0]=='1'&&str1[str1.size()-1]=='1')
				{
					count+=1;
					
				}

			}
		}
		cout<<count<<endl;
	}
	return 0;
}