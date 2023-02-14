#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string S,T;
	    cin>>S;
	    cin>>T;
	    string ans=" ";
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]==T[i])
	        {
	            ans+='G';
	        }
	        else
	        {
	            ans+='B';
	        }
	    }
	   cout<<ans<<endl; 
	}
	return 0;
}
