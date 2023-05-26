#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a1=0,b1=0;
	    int a = 1,b=0;
	    cin>>n;
	    string str;
	    cin>>str;
	    for(int i=0;i<n;i++)
	    {
	        if(a==1)
	        {
	            if(str[i]=='A')
	                a1++;
                else
                    a=0;b=1;
	        }
	        else
	        {
	            if(str[i]=='B')
	                b1++;
                else
                    a=1;b=0;    
	        }
	            
	    }
	    cout<<a1<<" "<<b1<<endl;
	}
	return 0;
}
