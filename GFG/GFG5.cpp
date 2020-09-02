#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N, M, i, j;
	cin >> T;

	while(T--) {
	    cin >> N ;
	    
		string pens;
	    cin >> pens;
	    
	    int redCount=0, greenCount=0;
	    
	    for(i=0; i<pens.length(); i++) {
	    	if(pens[i]=='R') {
	    		redCount++;
			}
			else {
				greenCount++;
			}
		}
		
		int M = (redCount<=greenCount) ? redCount : greenCount;
	    cout << M << endl;
	}
	return 0;
}

