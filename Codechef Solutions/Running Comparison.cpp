#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	       if( (a[i]*2>=b[i]) &&  (b[i]*2>=a[i]) )
	       {
	           cnt++;
	       }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
