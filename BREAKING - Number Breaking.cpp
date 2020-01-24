#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int t,count=0;
    cin>>t;
    while(t--)
    {
        count++;
        int n1,i;
        cin>>n1;
        int n=n1;
        
	bool prime[n+1];
	int c=0,a[n+1]={0};
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*p; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 
	for (int p=2; p<=n; p++) 
	if (prime[p]) 
		a[c++]=p;
		cout<<"Case "<<count<<":"<<" "; 
		for(i=0;i<c;i++)
		{
		    if(n1%a[i]==0)
		    cout<<a[i]<<" ";
		}
		cout<<endl;
    }
    return 0;
}
