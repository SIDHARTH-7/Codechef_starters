#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    float k=(n*x)/10000;
	    if(k>=1 && k<10)
	        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	    
	}
	return 0;
}
