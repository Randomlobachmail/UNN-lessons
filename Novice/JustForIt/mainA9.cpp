#include <iostream>
using namespace std;
int main(){
    int n, a, count;
    int c[1001];
    for(int i=0;i<1001;++i){
    	c[i]=0;
	}
	count=0;
	
	cin >> n;
    for(int i=0;i<n;++i){
    	cin >> a;
    	c[a]++;
	}
	
	for(int i=0;i<1001;++i){
		if(c[i]>count){
			count=c[i];
		}
	}
	
	cout << count*100/n << "%";
    
    return 0;
}
