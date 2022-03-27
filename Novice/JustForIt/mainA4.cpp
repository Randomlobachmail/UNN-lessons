#include <iostream>
using namespace std;
int main(){
    int n, a, b, count;
    cin >> n;
    
    a=-1;
    
    if(n==1){
    	cin >> b;
    	cout << a << endl;
    	return 0;
	}
	
	else{
		for(int i=0;i<n;++i){
    	cin >> b;
    	if (b>=a){
    		count = a;
			a=b;
			}
		else if(b>=count){
			count = b;
			}
		}
		
	}
    
    cout << count << endl;
    return 0;
}
