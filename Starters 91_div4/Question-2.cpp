#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n>15)
	    {
	        cout<<"Upper ";
	        if(n>25)
	            cout<<"Single"<<endl;
            else
                cout<<"Double"<<endl;
	    }
        else
        {
            cout<<"Lower ";
            if(n>10)
	            cout<<"Single"<<endl;
            else
                cout<<"Double"<<endl;
        }
	}
	return 0;
}
