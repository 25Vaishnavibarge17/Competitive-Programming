#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int inarr[n];
	    int cnt=0;
	    int outarr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>inarr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(inarr[j]>inarr[i])
	            {
	                cnt++;
	            }
	        }
	        outarr[i]=cnt;
	        cnt=0;
	            
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<outarr[i]<<" ";
	    }
	     cout<<endl;
	}
	return 0;
}
