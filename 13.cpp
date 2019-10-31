#include<bits/stdc++.h>
#define pb push_back
using namespace std;
 
 int main()
{	long long n,p,k; 
	cin>>n>>p>>k;
	long long a[n],x=k;
	map <long long,long long> mp;	
	for(int i=0;i<n;i++)
		{cin>>a[i];
		 a[i]%=p;
		  long long tp=(a[i]*a[i])%p;
		  tp=(tp*tp)%p;
		 long long ans=((tp)-((x*a[i])%p)+p)%p;
		// cout<<((tp%p)-((x*a[i])%p)+p)%p<<" "<<ans<<endl;
		 mp[ans]++;
		}
	//cout<<endl;	
	map<long long,long long>::iterator it;
	long long fin=0;
	for(it=mp.begin();it!=mp.end();it++)
		{fin+=((it->second)*(it->second-1))/2;
		}
	cout<<fin;
    return 0;
}
