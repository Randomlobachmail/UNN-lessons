#include <iostream>
using namespace std;
int main(){
    int n, a, b, count, acount;
    char c[101];
    int f[101];
    char d,e;
    count = 1, acount=0;
    
    cin>>e;
    while(cin >> d){
    	if(e==d){
    		count++;
		}
		else{
			
			c[acount]=e;
			f[acount]=count;
			
			++acount;
			count=1;
		}
		e=d;
	}
	c[acount]=e;
	f[acount]=count;

	
	
    
    for(int i=0;i<=acount;++i){
    	cout << c[i];
    	if(f[i]>1){
    		cout << f[i];
		}
	}

    
    return 0;
}
