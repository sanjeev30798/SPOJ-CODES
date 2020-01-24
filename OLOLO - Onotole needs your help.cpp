#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,i;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	scanf("%lli",&a[i]);
	sort(a,a+n);
	if(n==1)
	cout<<a[0]<<endl;
	else if(a[0]!=a[1])
	{
	    cout<<a[0]<<endl;
	}
	else if(a[n-1]!=a[n-2])
	cout<<a[n-1]<<endl;
	else
	{
	for(i=1;i<n-1;i++)
	{
	    if(a[i]!=a[i+1] && a[i]!=a[i-1])
	    break;
	 }
	 cout<<a[i]<<endl;
	}
	
	return 0;
}
