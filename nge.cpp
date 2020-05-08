/*
 #codehabbit
 #100daysof code
 day 1
 stack nge
*/
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	stack < int > s; 
  vector<int> v,v2;
  s.push(arr[0]); 
  for(int i=1;i<n;i++)
  {
    if(s.empty()==1)
    {
      s.push(arr[i]);
      continue;
    }
    while(!s.empty()&&s.top()<arr[i])
    {
      v.push_back(arr[i]);
      v2.push_back(s.top());
      s.pop();
    }
    s.push(arr[i]);
  }
  while(!s.empty())
  {
    v.push_back(-1);
    v2.push_back(s.top());
    s.pop();
  }
  for(int i=0;i<v.size();i++)
  {
    cout<<v2[i]<<"->"<<v[i]<<endl;
  }
	return 0;
}
