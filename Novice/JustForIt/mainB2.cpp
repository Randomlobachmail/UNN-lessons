#include <iostream>
using namespace std;
int main(){
    int n, a, b, c, d;
    cin >> n;
    a=0,b=0,c=0;
    
    for(int i=0;i<n;++i){
    	cin >> d;
    	if(d==1){
    		++a;
		}
		else if(d==2){
			++b;
		}
		else{
			++c;
		}
	}
	if(a>b&&a>c){
		cout << b+c;
	}
	else if(b>c){
		cout << a+c;
	}
	else{
		cout << a+b;
	}
	
	
    return 0;
}
