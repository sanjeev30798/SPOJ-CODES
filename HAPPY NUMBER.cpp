#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,sum=0,t1;
    long int count=0;
	scanf("%llu",&n);
	while(n>1)
	{
	    sum=0;
	    while(n>0)
	    {
	        t1=(n%10);
	        sum+=t1*t1;
	        n/=10;
	    }
	    count++;
	    n=sum;
	    if(n==1 || n==4)
	    break;
	}
	if(n==1)
	cout<<count<<endl;
	else
	cout<<"-1"<<endl;
	
	return 0;
}