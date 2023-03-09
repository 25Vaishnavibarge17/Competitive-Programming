#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int H,X,Y;
	    cin>>H>>X>>Y;
	    int a=H-Y;
	    int cnt=0;
	    while(a>0){
	        a=a-X;
	        cnt++;
	    }
	    cout<<cnt+1<<endl;
	}
	return 0;
}
