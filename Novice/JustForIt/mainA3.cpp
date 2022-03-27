#include <iostream>
using namespace std;
int main(){
    int n, a, b, count;
    cin >> n;
    
    a=-1;
    
    for(int i=0;i<n;++i){
    	cin >> b;
    	if (b>a){
			a=b;
			count = 1;
		}
		else if (b==a){
			++count;
		}
	}
        cout << a  << " " << count;
    return 0;
    }
