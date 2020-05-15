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
		/*
		 o(n^2)
		*/
		for(int i=0;i<m;i++)
		{
			for(int j=1;j<=m-i;j++)
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
		/*
		 o(n)
		 c is count of 1 present in string
		 total subbstring sarting and ending with 1 will be c*(c+1)/2
		*/
		long long int c=0;
		for(int i=0;i<m;i++)
		{
			if(str[i]=='1')
			{
				c=c+1;
			}
		}
		cout<<c*(c+1)/2<<endl;
	}
	return 0;
}