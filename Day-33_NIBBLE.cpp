#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"good"<<endl;
        }
        else{
            cout<<"not good"<<endl;
        }
    }
	// your code goes here
	return 0;
}