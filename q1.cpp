#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int maxi = INT_MIN;
		n = s.length();
		int x=0;
		for(int i=0;i<n;i++)
		{
			if(s[i] == '1')
			{
				x++;
			}
			else
			{
				maxi = max(x,maxi);
				x = 0;
			}
			//cout<<x<<" ";
		}
		cout<<maxi<<endl;
	}
}