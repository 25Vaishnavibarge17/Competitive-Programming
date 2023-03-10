#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y;
        cin>>X>>Y;
        if(X<Y)
        {
            cout<<X<<endl;
        }
        if(X==Y)
        {
            cout<<1<<endl;
        }
        if(X>Y)
        {
            if(X%Y==0)
            {
                cout<<X/Y<<endl;
            }
            else
            {
                int a=X/Y;
                int b=X%Y;
                cout<<a+b<<endl;
            }
        }
    }
	return 0;
}
