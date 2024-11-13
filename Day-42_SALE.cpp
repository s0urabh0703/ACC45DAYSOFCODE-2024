#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    int k = min(a,min(b,c));
	    cout<<a+b+c-k<<endl;
	}
	return 0;
}