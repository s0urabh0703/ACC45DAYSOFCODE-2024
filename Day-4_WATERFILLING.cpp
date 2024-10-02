#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	while(t--)
	{
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    
	    int sum=b1+b2+b3;
	    if(sum<=1)
	    {
	        cout<<"water filling time"<<endl;
	    }
	    else
	    {
	        cout<<"not now"<<endl;
	    }
	}
	

}
