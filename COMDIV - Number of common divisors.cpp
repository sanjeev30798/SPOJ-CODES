#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);//fast input and output
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	cin>>n;
	while(n--)
	{
	    long int a,b,count=0;
	    int i,t1;
	    cin>>a>>b;
	    t1=__gcd(a,b);
	    for(i=1;i<=sqrt(t1);i++)
	    {
	        if(t1%i==0)
	        {
	            if(t1/i==i)
	            count++;
	            else
	            count+=2;
	        }
	    }
	    printf("%lu\n",count);
	}
	return 0;
}
