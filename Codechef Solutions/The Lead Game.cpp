#include <iostream>
using namespace std;
int main() {
	int n;
	int a,b,asum=0,bsum=0,p1=0,p2=0;
	cin>>n;
	while(n--)
	{
	   
	   cin>>a>>b;
	   asum+=a;
	   bsum+=b;
	   if(asum>bsum)
	   {
	       p1=max(p1,asum-bsum);
	   }
	   else
	   {
	       p2=max(p2,bsum-asum);
	   }
	    
	}
	if(p1>p2)
	   {
	       cout<<"1"<<p1<<endl;
	   }
	   else
	   {
	      cout<<"2"<<p2<<endl; 
	   }

}
