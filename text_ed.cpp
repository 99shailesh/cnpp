/*
 #codehabbit
 #100daysof code
 day 2
*/
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
		string str="",str1;
		vector <string> st;
		int m;	
	while(n--)
	{

		cin>>m;
		if(m==1)
		{
			cin>>str1;
			str=str+str1;
			st.push_back(str);
		}
		if(m==2)
		{
			int t;
			cin>>t;
			str=str1.substr(0,str1.size()-t);
			st.push_back(str);
		}
		if(m==3)
		{
			int t;
			cin>>t;
			cout<<str[t-1]<<endl;
		}
		if(m==4)
		{
			if(!st.empty())
			{
				st.pop_back();
			}
			string str2=st.back();
			str=str2;

		}
			
	}
	return 0;
}
