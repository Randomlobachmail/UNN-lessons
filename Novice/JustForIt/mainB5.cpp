    #include <iostream>
    using namespace std;
    int main(){
        char a[200];
        int b = 0;
        int c;
        int d[100];
        while(cin >> a[b]){
        	++b;
		}
		c=b/2;
		
		for(int i=0;i<c;++i){
			d[i]=a[i]^a[i+c];
			cout << d[i];
		}
    		
    	return 0;
    }
