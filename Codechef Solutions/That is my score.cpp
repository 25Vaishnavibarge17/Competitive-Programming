#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int cnt=0;
	    unordered_map<int,int>mp;
	    int pblm,score;
	    
	    for(int i=0;i<N;i++)
	    {
	        cin>>pblm>>score;
	        if(pblm<=8)
	        {
	           if(mp.find(pblm)==mp.end())
	        {
	            mp[pblm]=score;
	        }
	        else if(mp[pblm]<=score)
	        {
	            mp[pblm]=score;
	        } 
	    }
	}
	    for(auto it:mp)
	    {
	        cnt+=it.second;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
