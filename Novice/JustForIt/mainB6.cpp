    #include <iostream>
    using namespace std;
    int main(){
    	int n;
        int a[100];
        int b = 0, count = 0;

        cin >> n;
        
        for(int i=0;i<n;++i){
        	cin >> a[i];
        	b+=a[i];
		}
		
		for(int i=0;i<n;++i){
			if((b-a[i])%2==0){
				++count;
			}
		}
		
		cout << count;
    		
    	return 0;
    }
