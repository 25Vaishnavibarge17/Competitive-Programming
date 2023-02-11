#include <bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int>mp;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        reverse(arr,arr+n);
        for(int i=0;i<n;i++)
        {
             mp[arr[i]]++;
        }
        int check=1;
        for(auto it:mp)
        {
            if(it.second%2)
            {
                check=0;
                break;
            }
        }
        if(check)
        {
            cout<<"Zenyk"<<endl;
        }
        else
        {
           cout<<"Marichka"<<endl;
        }
    }
	return 0;
}
