#include <iostream>
using namespace std;
int main(){
    int n, a, count;
    int c[1001];
    for(int i=0;i<1001;++i){
    	c[i]=0;
	}
	
	cin >> n;
    for(int i=0;i<n;++i){
    	cin >> a;
    	c[a]++;
	}
	
	for(int i=1000;i>=0;--i){
		while(c[i]>0){
			cout << i << " ";
			--c[i];
		}
	}
    
    return 0;
}
