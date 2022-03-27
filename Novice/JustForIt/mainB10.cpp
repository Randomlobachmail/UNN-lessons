        #include <iostream>
        using namespace std;
        int main(){
        	int n;
            int a[100], aa[100], ac[101];
            int b = 0, c = 0, count = 0, acount = 0, countaa = 0, countab = 0, even=0, mina=0, minb=0;
            int d, e, f, countac;
     
            cin >> n;
            
            for(int i=0;i<n;++i){
            	for(int j=0;j<=100;++j){
            		ac[j]=0;
    			}
            	
            	cin >> b;
            	if(b%2==1){
            		even=1;
    			}
    			else{
    				even=0;
    			}
    			
            	for(int j=0;j<b;++j){
            		cin >> a[j];
            		ac[a[j]]++;
    			}
    			
    			for(int j=0;j<=100;++j){
    				if(ac[j]==0){
    					mina=j;
    					break;
    				}
    			}
    			for(int j=0;j<=100;++j){
    				if(ac[j]<2){
    					minb=j;
    					break;
    				}
    			}
    			aa[i]=mina+minb;
    		}
            
            for(int i=0;i<n;++i){
            	cout << aa[i] << endl;
    		}
    		
        		
        	return 0;
        }
