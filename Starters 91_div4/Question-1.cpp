#include <iostream>
using namespace std;

int main() {
    int x,y,h;
	cin>>x>>y>>h;
	if(h>1)
	cout<<x+y*(h-1)<<endl;
	else
	cout<<x;
	return 0;
}
