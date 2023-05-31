#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,l,arr[101]={0};
	    cin>>n>>k>>l;
	    for(int i=0;i<n;i++)
	    {
	        int m,l2;
	        cin>>m>>l2;
	        if(l2==l)
	            arr[m]++;
	    }
	    int sum=0,i=100;
	    while(k)
	    {
	        if(arr[i--]>0)
	       {
	           sum+=i+1;
	           k--;
	       }
	       if(i==-1)
	        break;
	    }
	    if(k>0)
	        cout<<-1<<endl;
        else
            cout<<sum<<endl;
	}
	return 0;
}
