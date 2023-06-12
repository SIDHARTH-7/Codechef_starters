#include <iostream>
using namespace std;

int main() {
	// your co
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]%2==0)
	            p++;
	    }
	    int pro=1;
        for(int i=0;i<p;i++)
        {
            pro%=1000000007;
            pro*=2;
        }
        cout<<pro<<endl;
	}
	return 0;
}
