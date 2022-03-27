    #include <iostream>
    using namespace std;
    int main(){
    	int n;
        int a[100],b[101];
        int c = 0;
		int count = 0;

        cin >> n;
        
        for(int i=0;i<101;++i){
        	b[i]=0;
		}
        
        for(int i=0;i<n;++i){
        	cin >> a[n];
        	b[a[n]]++;
		}
		
		for(int i=1;i<101;++i){
			if(b[i]!=0&&b[i]!=1){
				while(b[i]!=0&&b[i]!=1){
					++c;
					b[i]-=2;
				}
			}
		}
		
		count = c/2;
		cout << count;
    		
    	return 0;
    }
