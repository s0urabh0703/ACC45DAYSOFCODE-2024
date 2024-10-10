#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        float a,b;
        cin>>a>>b;
        float c=(b/a)*100;
        if(c>=50){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
