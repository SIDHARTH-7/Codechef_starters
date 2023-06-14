#include <iostream>
#include <vector>
using namespace std;
bool isvowel(char a)
{
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        return true;
    else
        return false;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    char str[n];
	    vector<int> arr;
	    for(int i=0;i<n;i++)
	    {
	        cin>>str[i];
	        if(isvowel(str[i]))
	            arr.push_back(i);    
	    }
	    int p=1;
	    for(int i=k;i<arr.size();i+=k)
	    {
	        p*=(arr[i]-arr[i-1])%1000000007;    
	    }
	    cout<<p<<endl;
	}
	return 0;
}
