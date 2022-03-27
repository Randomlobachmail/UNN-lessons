    #include <iostream>
    using namespace std;
    int main(){
        char n[200],m[100];
        char a;
        int i=0;
        
        while(cin >> a){
        	n[i]=a;
        	++i;
    	}
    	int j=i/2;
    	
    	for(int k=0;k<j;++k){
    			if(n[k]!=m[i-k-1]){
    				cout << "NO";
    				return 0;
    			}
    		}
    		cout << "YES";
    		return 0;
    }
