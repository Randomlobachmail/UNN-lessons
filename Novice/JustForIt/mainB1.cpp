#include <iostream>
using namespace std;
int main(){
    int n, a, count;
    int black=0;
    int c[102];
    int j = 0;
    count = 0;
    char b;
    for(int i=0;i<102;++i){
    	c[i]=0;
	}
	
	cin >> n;
	cin >> b;
	if(b=='B'){
		black=1;
		++count;
		++c[0];
	}
    for(int i=0;i<n-1;++i){
    	cin >> b;
    	if(b=='B'){
    		if(black==1){
    			++c[j];
			}
			else{
				black=1;
				++count;
				++c[j];
			}
		}
		else{
			if(black==1){
				black = 0;
				j++;
			}
		}
	}
	j=0;
	cout << count;
	if(c[j]!=0){
		cout << endl;
		while(c[j]!=0){
			cout << c[j] << " ";
			++j;
		}
	}
	
    return 0;
}
