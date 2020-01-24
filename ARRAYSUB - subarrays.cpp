#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],i,max,k;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>k;
	for(i=0;i<n-k+1;i++)
	{
	    max=*max_element(a+i,a+i+k);
	    cout<<max<<" ";
	}
	
	
	return 0;
}
