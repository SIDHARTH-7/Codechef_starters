#include <iostream>
using namespace std;
#define m 1000000007
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    long long pro=1;
	    for(int i=0;i<n;i++)
	    {
	        pro*=k;
	        pro%=1000000007;
	        k--;
	        if(k<2)
	            break;
	    }
    	    cout<<pro<<endl;
	}
	// your code goes here
	return 0;
}
