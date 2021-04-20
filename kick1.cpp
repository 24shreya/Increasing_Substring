#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t; cin>>t;
	for(int n=0; n<t; n++)
	{
		cout<<"\nCase #"<<n+1<<":";
		unsigned long long int ioi; cin>>ioi;
		string s; cin>>s;
		int cnt;
		char lar;
		for(unsigned long long int i=0; i<ioi; i++)  //traversing string
		{   cnt=0;
		    lar='0';
			for(int j=0; j<=i; j++)                  //accounting length of possible string by limiting j to i
			{   
			    if (s[j]>lar) 
			    {
			    	lar=s[j];
			    	++cnt;
				}
				else if(s[j]<=lar)
				{   cnt=1;
					continue;
				}
			}
			cout<<" "<<cnt;
		}
	}
}

