#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int k;
       cin>>k;
       int m=arr[k-1];
       sort(arr, arr + n);
       for(int i=0;i<n;i++)
       {
          if(arr[i]==m)
          {
              cout<<i+1<<endl;
          }
       }
       
    }
}