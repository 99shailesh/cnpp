#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={4, 5, 6, 7, 0, 1, 2, 3};
	int n=8,m,l,r,l1,r1,l2,r2,b=3;
	l=0;
	r=n-1;
	//main code start from here
	while(l<=r){
		m=l+(r-l)/2; //to prevent overflow
		if(l==r)
		{
			l1=0;
			r1=m;
			l2=m+1;
			r2=n-1;
			break;
		}
		if(m>l && m<r && a[m]<a[m+1] && a[m-1]<a[m]){
			l=m;
		}
		else{
			r=m;
		}
	}
	//cout<<a[r1+1]<<endl; max elsement postion is known;
	int f=0,m1,m2,id;
	r1=r1+1;
	while(l1<=r1){
		m1=l1+(r1-l1)/2;
		if(b==a[m1]){
			f=1;
			id=m1;
			break;
		}
		else if(a[m1]>b){
			r1=m1-1;
		}
		else{
			l1=m1+1;
		}
		if(l1==r2){
			break;
		}
	}
	r2=r2+1;
	while(f==0 && l2<=r2){
		m2=l2+(r2-l2)/2;
		if(b==a[m2]){
			f=1;
			id=m2;
			break;
		}
		else if(a[m2]>b){
			r2=m2-1;
			cout<<"else if: 2"<<endl;
		}
		else{
			l2=m2+1;
			cout<<"else: 2"<<endl;
		}
		if(l2==r2){
			break;
		}
	}
	if(f==0){
		cout<<-1<<endl;
	}
	else{
		cout<<id<<endl;
	}
	return 0;
}
