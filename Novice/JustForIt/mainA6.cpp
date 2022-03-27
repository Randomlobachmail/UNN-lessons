#include <iostream>
using namespace std;
int main(){
    int n, a, b, count;
    a=0;
    b=0;
    count=2;
    while(cin >> n){
    	if(n!=count){
    		if(n==0){
    		count=0;
    		++a;
			}
			else if(n==1){
			count=1;
			++b;
			}
		}
	}
    
    cout << b << " " << a << endl;
    return 0;
}
