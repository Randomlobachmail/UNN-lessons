    #include <iostream>
    using namespace std;
    int main(){
    	int n;
        int a[1000];
        int b = 0, c = 0;
		int count = 0;

        cin >> n;
        cin >> b >> a[0];
        
        for(int i=1;i<n;++i){
        	cin >> b >> c;
        	a[i]=a[i-1]-b+c;
		}
		
		
		for(int i=0;i<n-1;++i){
			if(a[i]>count){
				count=a[i];
			}
		}
		
		cout << count;
    		
    	return 0;
    }
