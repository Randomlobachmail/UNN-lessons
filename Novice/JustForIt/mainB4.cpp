    #include <iostream>
    using namespace std;
    int main(){
        int a[101];
        int n;
        int c=0, d=0, e=0;
        
        cin >> n;
        
        
    	for(int i=1;i<n;++i){
    			cin >> a[i];
    		}
    	
    	cin >> c >> d;
    	for(int i=c;i<d;++i){
    		e+=a[i];
		}
		
		cout << e;
    	
    		
    	return 0;
    }
