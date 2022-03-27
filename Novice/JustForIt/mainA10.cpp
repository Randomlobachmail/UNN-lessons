#include <iostream>
using namespace std;
int main(){
    int n, a, count;
    int c[2001];
    for(int i=0;i<2001;++i){
    	c[i]=0;
	}
	count=0;
	
	cin >> n;
    for(int i=0;i<n;++i){
    	cin >> a;
    	c[a+1000]++;
	}
	
	for(int i=0;i<2001;++i){
		if(c[i]>0){
			count++;
		}
	}
	
	cout << count;
    
    return 0;
}
