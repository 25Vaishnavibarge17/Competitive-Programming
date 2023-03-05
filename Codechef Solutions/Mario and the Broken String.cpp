#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    string s="";
	    string str1,str2;
	    char ch;
	    for(int i=0;i<N;i++)
	    {
	        cin>>ch;
	        s=s+ch;
	    }
	    str1 = s.substr(0,N/2);
	    str2 = s.substr(N/2,N);
	    if(str1==str2)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
