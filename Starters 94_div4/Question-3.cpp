#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    int a1=0,maxa=0,b1=0,maxb=0;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==0)
	        {
	            maxa=maxa>a1?maxa:a1;
	            a1=0;
	        }
	        else
	            a1++;
	    }
	    maxa=maxa>a1?maxa:a1;
	    for(int i=0;i<n;i++)
	    {
	        if(b[i]==0)
	        {
	            maxb=maxb>b1?maxb:b1;
	            b1=0;
	        }
	        else
	            b1++;
	    }
	    maxb=maxb>b1?maxb:b1;

	    if(maxa>maxb)
	        cout<<"OM"<<endl;
        else if(maxa<maxb)
            cout<<"ADDY"<<endl;
        else
            cout<<"DRAW"<<endl;
	}
	return 0;
}
