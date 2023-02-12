#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  int a,b;
	  cin>>a>>b;
	  int f=a;
	  int l=b;
	  int c=0;
	  for(int i=f;i<=l;i++)
	  {
	      if(i%10==2 || i%10==3 || i%10==9)
	      {
	          c++;
	      }
	  }
	  cout<<c<<endl;
	  c=0;
	}
	
	return 0;
}
