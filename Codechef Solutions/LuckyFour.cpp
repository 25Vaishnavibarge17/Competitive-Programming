#include <iostream>
using namespace std;
int main() {
    int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int cnt=0;
	    while(n!=0){
	        if((n%10)==4){
	            cnt++;
	        }
	        n=n/10;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
