#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n%2==0)
	    {
	        for(int i=n;i>0;i--)
	            cout<<i<<" ";
	    }
	    else
	        cout<<"-1";
        cout<<endl;
	}
	return 0;
}
