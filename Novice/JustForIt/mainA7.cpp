#include <iostream>
using namespace std;
int main(){
    int n, a, b, count;
    
    cin >> n;
    count = 0,b = 0;
    
    for (int i=0;i<n;++i){
    	cin >> a;
    	if(a==1){
    		++b;
		}
		else{
			if(b>count){
				count=b;
			}
			b=0;
		}
	}
	if(b>count){
		count=b;
	}
    
    cout << count << endl;
    return 0;
}
