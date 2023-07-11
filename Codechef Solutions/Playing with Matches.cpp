#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int A,B;
	    cin>>A>>B;
	    int sum;
	    sum=A+B;
	    int ans=0;
	    for (int i = 0; sum > 0; i++) 
	    {
           int digit = sum % 10;
           if(digit==0 || digit==6 || digit==9)
           {
               ans+=6;
           }
           if(digit==1)
           {
               ans+=2;
           }
           if(digit==2 || digit==3 || digit==5)
           {
               ans+=5;
           }
           if(digit==4)
           {
               ans+=4;
           }
           if(digit==7)
           {
               ans+=3;
           }
           if(digit==8)
           {
               ans+=7;
           }
           
           sum /= 10;
        }
        cout<<ans<<endl;
	    
	}
	return 0;
}
