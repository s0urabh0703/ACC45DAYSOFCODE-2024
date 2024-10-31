#include <iostream>
using namespace std;

int main() {
        int t,p,q,x;
        cin>>t;
        while(t--){
                cin>>p>>q;
                x=(p+q)%4;
                switch (x){
                case 0:
                case 1:
                      cout<<"alice"<<endl;
                      break;
                case 2:
                case 3:
                      cout<<"bob"<<endl;
                }
        }
	// your code goes here
	return 0;
}