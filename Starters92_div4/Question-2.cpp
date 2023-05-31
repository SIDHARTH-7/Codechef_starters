#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a+b+c <2)
	        cout<<"Water filling time"<<endl;
        else
            cout<<"Not now"<<endl;
	}
	return 0;
}
