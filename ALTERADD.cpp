#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long a, b;
	    cin >> a >> b;
	    long long lol = b-a;
	    if(lol%3 == 2){
	        cout << "NO" << endl;
	    }
	    else{
	        cout << "YES" << endl;
	    }
	}
	
	return 0;
}
