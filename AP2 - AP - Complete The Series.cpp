#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int t1,d,x,y,z,n,a;
	    cin>>x>>y>>z;
	    int i;
	    n=(2*z)/(x+y);
	    d=(y-x)/(n-5);
	    a=x-2*d;
	    cout<<n<<endl;
	    for(i=1;i<=n;i++)
	    {
	        t1=a+(i-1)*d;
	        if(i<n)
	        cout<<t1<<" ";
	        else
	        cout<<t1<<endl;
	    }
	    
	}
	
	return 0;
}
