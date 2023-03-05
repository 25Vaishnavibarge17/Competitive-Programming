#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    string s=to_string(x);
	    string orig=s;
	    reverse(s.begin(),s.end());
	    if(orig==s)
	    {
	        cout<<"wins"<<endl;
	    }
	    else
	    {
	        cout<<"loses"<<endl;
	    }
	    
	}
	return 0;
}
