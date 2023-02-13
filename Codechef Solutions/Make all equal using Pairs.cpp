#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,num;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>num;
	        v.push_back(num);
	    }
	    sort(v.begin(),v.end());
	    int cnt;
	    int maxcnt=0;
	    for(int i=0;i<n;i++)
	    {
	        cnt=1;
	        for(int j=i+1;j<n;j++)
	        {
	            if(v[i]==v[j])
	            {
	                cnt++;
	            }
	        }
	       maxcnt=max(maxcnt,cnt); 
	    }
	    cout<<n-maxcnt<<endl;
	 }
	return 0;
}
