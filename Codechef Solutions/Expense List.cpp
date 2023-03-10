#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N,X;
	    cin>>N>>X;
	    
	    int a=pow(2,X);
	    while(N--)
	    {
	        a=a/2;
	    }
	    cout<<a<<endl;
	    
	}
	return 0;
}
